import objc.*
import kotlinx.cinterop.*

@ExportObjCClass
class ScheduleViewController : UIViewController, UITableViewDelegateProtocol{

    constructor(aDecoder: NSCoder) : super(aDecoder)
    override fun initWithCoder(aDecoder: NSCoder) = initBy(ScheduleViewController(aDecoder))

    @ObjCOutlet
    lateinit var dayChooser: UISegmentedControl

    @ObjCOutlet
    lateinit var tableView: UITableView

    var hourBlocks = mutableListOf<DVMHourBlock>()
    var conferenceDays= mutableListOf<DVMDaySchedule>()

    lateinit var conferencePresenter: DVMConferenceDataViewModel
    lateinit var schedulePresenter: DVMScheduleDataViewModel
    var allEvents = true

    @ObjCAction
    fun updateTable() {
        updateTableData()
        tableView.reloadData()
    }

    override fun viewWillAppear(animated: Boolean){
        conferencePresenter = DVMConferenceDataViewModel.forIosWithBoolean(allEvents)!!
        schedulePresenter = DVMScheduleDataViewModel.forIos()!!

        schedulePresenter.wireWithDVMScheduleDataViewModel_Host(object: DKOTKotlinScheduleDataViewModel(){
            override fun loadCallbackWithDKOTKotlinScheduleDataViewModel_DayScheduleCollection(dayScheduleCollection: DKOTKotlinScheduleDataViewModel_DayScheduleCollection?){
                loadCallback(dayScheduleCollection!!)
            }
        }, allEvents)
        conferencePresenter.wireWithDVMConferenceDataViewModel_Host(object : DKOTKotlinConferenceDataViewModelHost(){
            override fun updateConferenceDatesWithLongArray(dates: IOSLongArray?){
                if(dates != null)
                    updateConferenceDates(dates!!)
            }
        })

        tableView.setDelegate(this)
        tableView.setDataSource(MyUITableViewDataSourceProtocol())
    }


    fun loadCallback(daySchedules: DKOTKotlinScheduleDataViewModel_DayScheduleCollection) {
        hourBlocks = mutableListOf<DVMHourBlock>()
        conferenceDays.clear()

        for(i in 0 until daySchedules.size())
        {
            conferenceDays.add(daySchedules.getWithInt(i)!!)
        }

        updateTableData()
        tableView.reloadData()
    }

    fun updateTableData() {
        hourBlocks.clear()

        var array = mutableListOf<DVMHourBlock>()

        val index = dayIndex()

        if(conferenceDays.size > index)
        {
            val hourBlockCollection = conferenceDays.get(index).getHourBlockCollection()!!
            for(i in 0 until hourBlockCollection.size() )
            {
                array.add(hourBlockCollection.getWithInt(i)!!)
            }
        }
        hourBlocks = array
    }

    fun dayIndex():Int{
        var isDayTwo = dayChooser.selectedSegmentIndex > 0
        return if(isDayTwo){1}else{0}
    }

    fun updateConferenceDates(dateList: IOSLongArray) {
        for(i in 0 until dayChooser.numberOfSegments){
            println("HEY A")
            val dateTitle = DUTTimeUtils.makeDateFormatWithNSString("MMM dd")!!.formatWithJavaUtilDate(JavaUtilDate(dateList.longAtIndex(i as NSInteger)))
            println("HEY "+ dateTitle)
            dayChooser.setTitle(dateTitle, i)
        }
    }

    //MARK: TableView
    /*override fun tableView(tableView: UITableView, didHighlightRowAtIndexPath: NSIndexPath){
        tableView.cellForRowAtIndexPath(didHighlightRowAtIndexPath)?.highlighted = true
    }

    func tableView(_ tableView: UITableView, didUnhighlightRowAt indexPath: IndexPath) {
        tableView.cellForRow(at: indexPath)?.isHighlighted = false
    }*/

    override fun tableView(tableView: UITableView, didSelectRowAtIndexPath: NSIndexPath){
        tableView.deselectRowAtIndexPath(didSelectRowAtIndexPath, false)

        val eventObj = hourBlocks.get(didSelectRowAtIndexPath.row.toInt())
        if(eventObj != null){
            println(eventObj!!.getName())
            //                showEventDetailView(with: networkEvent, andIndex: indexPath.row)
        }
    }

    override fun debugDescription():String?{
        return "This is garbage"
    }

    /*func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        let index = isDayTwo ? 1 : 0
        guard let days = self.conferenceDays, days.count > index else {
            return 0
        }
        let daySchedule = days[index]
        return Int(daySchedule.getHourHolders().length())
    }*/

    inner class MyUITableViewDataSourceProtocol: NSObject(), UITableViewDataSourceProtocol{
//        constructor(aDecoder: NSCoder) : super(aDecoder)
//        override fun initWithCoder(aDecoder: NSCoder) = initBy(MyUITableViewDataSourceProtocol(aDecoder))

        override fun tableView(tableView: UITableView, cellForRowAtIndexPath: NSIndexPath): UITableViewCell{
//            var cell = tableView.dequeueReusableCellWithIdentifier("scheduleListCellIdentifier", cellForRowAtIndexPath)
            var cell = tableView.dequeueReusableCellWithIdentifier("basicCell", cellForRowAtIndexPath)

            val hourHolder = hourBlocks.get(cellForRowAtIndexPath.row.toInt())
//            val eventObj = hourHolder.getTimeBlock()!!

            cell.textLabel!!.text = hourHolder.getName()//.replacingOccurrences(of: "Android", with: "Binky")
            cell.detailTextLabel!!.text = hourHolder.getSpeakers()

            val timeText = hourHolder.getSpeakers() == ""

            cell.textLabel!!.font = if(timeText) {UIFont.boldSystemFontOfSize(16.0)}else{UIFont.boldSystemFontOfSize(14.0)}

           /* val subviews = cell.contentView!!.subviews

            for(i in 0 until subviews.count())
            {
                val v = subviews.objectAtIndex(i)!! as UILabel
                v.text = "AAA "+ i

//                println("subview: "+ v.tag)
            }*/

            /*if(cell is ScheduleListCell)
            {
                println("FFF ScheduleListCell")
                val hourHolder = hourBlocks.get(cellForRowAtIndexPath.row.toInt())
                val eventObj = hourHolder.getTimeBlock()!!

                if(eventObj is DDATEvent)
                {
                    val event = eventObj as DDATEvent
                    cell.titleLabel.text = event.getName()//.replacingOccurrences(of: "Android", with: "Binky")
                    cell.speakerNamesLabel.text = event.allSpeakersString()
                }
                else{
                    cell.titleLabel.text = "Damn"
                    cell.speakerNamesLabel.text = "No show"
                }
            }
            else if(cell is UITableViewCell)
            {
                println("FFF UITableViewCell")
                cell.textLabel?.text = "Crapola"
            }
            else
{
println("FFF "+ cell::class)
}*/


            /*else if (eventObj is DDATBlock)
            {
                val event = eventObj as DDATBlock
                cell.titleLabel.text = event.getName()
                cell.speakerNamesLabel.text = ""
            }*/
            /*if let event = eventObj as? DDATEvent {
                cell.titleLabel.text = event.getName().replacingOccurrences(of: "Android", with: "Binky")
                cell.speakerNamesLabel.text = event.allSpeakersString()
            } else if let event = eventObj as? DDATBlock {
                cell.titleLabel.text = event.getName()
                cell.speakerNamesLabel.text = ""
            }*/

//            cell.timeLabel.text = hourHolder.getHourStringDisplay().lowercased()
//            cell.startOfBlock = indexPath.row == 0 || hourBlocks[indexPath.row - 1].getTime().getStartLong() != eventObj!.getStartLong()
//            cell.layer.isOpaque = true
            return cell
        }

        override fun tableView(tableView: UITableView, numberOfRowsInSection: NSInteger):NSInteger{
            val index = dayIndex()
            if(conferenceDays.size <= index)
            {
                return 0
            }

            val daySchedule = conferenceDays.get(index)

            //val hourBlockCollection = conferenceDays.get(index).getHourBlockCollection()!!
            val hoursLength = daySchedule.getHourBlockCollection()!!.size().toLong()
            return hoursLength
        }
    }


    /*func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {

        let cell = tableView.dequeueReusableCell(withIdentifier: "scheduleListCellIdentifier", for: indexPath) as! ScheduleListCell

        let hourHolder = hourBlocks[indexPath.row]
        let eventObj = hourHolder.getTime()

        if let event = eventObj as? DDATEvent {
            cell.titleLabel.text = event.getName().replacingOccurrences(of: "Android", with: "Binky")
            cell.speakerNamesLabel.text = event.allSpeakersString()
        } else if let event = eventObj as? DDATBlock {
            cell.titleLabel.text = event.getName()
            cell.speakerNamesLabel.text = ""
        }
        cell.timeLabel.text = hourHolder.getHourStringDisplay().lowercased()
        cell.startOfBlock = indexPath.row == 0 || hourBlocks[indexPath.row - 1].getTime().getStartLong() != eventObj!.getStartLong()
        cell.layer.isOpaque = true
        return cell
    }*/


    /*@ObjCAction
    fun buttonPressed() {

        val viewModel = DVMScheduleDataViewModel.forIos()!!
        val host = ScheduleDataViewModelHost()
        viewModel.wireWithDVMScheduleDataViewModel_Host(host, true)
//        viewModel.wireWithDVMSponsorsViewModel_Host(host, 0)
//          val testThings = CoTouchlabSmalldoppltestSharedTestThings()
//        label.text = testThings.hello()
//        label.text = "asdf"
    }*/
}
