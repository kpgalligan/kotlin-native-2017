import objc.*
import kotlinx.cinterop.*

@ExportObjCClass
class ScheduleListCell : UITableViewCell{
    constructor(aDecoder: NSCoder) : super(aDecoder)
    override fun initWithCoder(aDecoder: NSCoder) = initBy(ScheduleListCell(aDecoder))

    @ObjCOutlet
    lateinit var titleLabel: UILabel

    @ObjCOutlet
    lateinit var speakerNamesLabel: UILabel

    @ObjCOutlet
    lateinit var timeLabel: UILabel

    @ObjCOutlet
    lateinit var cardBackgroundToTopConstraint: NSLayoutConstraint

    /*var startOfBlock: Bool = false {
        didSet {
            cardBackgroundToTopConstraint.constant = startOfBlock ? 10 : 0
        }
    }

    override var isHighlighted: Bool {
        didSet {
            updateBackgroundColor()
        }
    }
    @IBInspectable var highlightedColor : UIColor?


    func updateBackgroundColor() {
        titleLabel.superview!.backgroundColor = isHighlighted ? highlightedColor : UIColor.white
    }*/
}
