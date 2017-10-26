//
//  ScheduleViewController.h
//  konan
//
//  Created by Kevin Galligan on 10/24/17.
//  Copyright © 2017 JetBrains. All rights reserved.
//

#import "ViewController.h"

@interface ScheduleViewController : ViewController

@property (weak, nonatomic) IBOutlet UISegmentedControl *dayChooser;
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
