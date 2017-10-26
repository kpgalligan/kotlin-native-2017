import objc.*
import kotlinx.cinterop.*

fun main(args: Array<String>) {
    memScoped {
        val argc = args.size + 1
        val argv = (arrayOf("konan") + args).map { it.cstr.getPointer(memScope) }.toCValues()

        autoreleasepool {
            UIApplicationMain(argc, argv, null, NSStringFromClass(AppDelegate))
        }
    }
}

class KotlinLocalLoadDataSeed: DKOTKotlinLoadDataSeed(){
    override fun dataSeed(): String {
        return DKOTKotlinHelper.loadResrouceSeedWithNSString("dataseed.json")!!
    }

}

class AppDelegate : UIResponder(), UIApplicationDelegateProtocol{
    companion object : UIResponderMeta(), UIApplicationDelegateProtocolMeta {}

    override fun init() = initBy(AppDelegate())

    private var _window: UIWindow? = null

    override fun window() = _window
    override fun setWindow(window: UIWindow?) { _window = window }

    override fun application(application: UIApplication, willFinishLaunchingWithOptions: NSDictionary?): Boolean{
        DopplRuntime.start()

        val platformClient = DCIosPlatformClient(DKOTKotlinIosFirebase())
        val application = AndroidContentIOSContext()

        val appComponent = DDAGDaggerAppComponent.builder()!!
                .appModuleWithDDAGAppModule(DDAGAppModule(application))!!
                .networkModuleWithDDAGNetworkModule(DDAGNetworkModule())!!
                .build()

        DVMAppManager.createWithAndroidContentContext(application, platformClient, appComponent)
        DVMAppManager.getInstance()!!.seedWithDVMLoadDataSeed(KotlinLocalLoadDataSeed());

        return true
    }


    /*override fun logFirebaseNative(with s: String!) {

    }

    override fun logPushNative(with s: String!) {

    }

    override fun logEvent(with name: String!, withNSStringArray params: IOSObjectArray!) {

    }*/
}

class ScheduleDataViewModelHost: DKOTKotlinScheduleDataViewModel(){

    override fun loadCallbackWithDVMDayScheduleArray(daySchedules: IOSObjectArray){
        println("LEMMY: loadCallbackWithDVMDayScheduleArray " + daySchedules.length())
    }

}

@ExportObjCClass
class ViewController : UIViewController {

    constructor(aDecoder: NSCoder) : super(aDecoder)
    override fun initWithCoder(aDecoder: NSCoder) = initBy(ViewController(aDecoder))

    @ObjCOutlet
    lateinit var label: UILabel

    @ObjCOutlet
    lateinit var textField: UITextField

    @ObjCOutlet
    lateinit var button: UIButton

    @ObjCAction
    fun buttonPressed() {

        val viewModel = DVMScheduleDataViewModel.forIos()!!
        val host = ScheduleDataViewModelHost()
        viewModel.wireWithDVMScheduleDataViewModel_Host(host, true)
//        viewModel.wireWithDVMSponsorsViewModel_Host(host, 0)
//          val testThings = CoTouchlabSmalldoppltestSharedTestThings()
//        label.text = testThings.hello()
//        label.text = "asdf"
    }
}
