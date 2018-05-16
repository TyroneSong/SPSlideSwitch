//
//  ViewController.m
//  SPSlideSwitch
//
//  Created by 石头 on 2018/5/15.
//  Copyright © 2018年 宋璞. All rights reserved.
//

#import "ViewController.h"
#import "SPSlideSwitch.h"
#import "SubViewController.h"

@interface ViewController ()<SPSlideSwitchDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSArray* titleArray = @[@"1", @"2", @"3", @"4", @"5", @"6"];
    NSMutableArray *vcArr = [NSMutableArray new];
    for (int i = 0; i < titleArray.count; i ++) {
        UIViewController *vc = [[SubViewController alloc] init];
        [vcArr addObject:vc];
    }
    
    SPSlideSwitch *slideSwitch = [[SPSlideSwitch alloc] initWithFrame:CGRectMake(0, 64, 300, 300) slideDirection: SPSlideSegmentedDirectionVerticality Titles:titleArray viewControllers:vcArr];
    
    slideSwitch.delegate = self;
    slideSwitch.itemSelectedColor = [UIColor redColor];
    slideSwitch.itemNormalColor = [UIColor blackColor];
    slideSwitch.customTitleSpacing = 1;
    [slideSwitch showInViewController:self];
    
    
    SPSlideSwitch *slideSwitchH = [[SPSlideSwitch alloc] initWithFrame:CGRectMake(40, 364, 300, 300) slideDirection: SPSlideSegmentedDirectionHorizontal Titles:titleArray viewControllers:vcArr];
    
    slideSwitchH.delegate = self;
    slideSwitchH.itemSelectedColor = [UIColor redColor];
    slideSwitchH.itemNormalColor = [UIColor blackColor];
    slideSwitchH.customTitleSpacing = 1;
    [slideSwitchH showInViewController:self];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - SPSlideSwitchDelegate
- (void)slideSwitchDidselectAtIndex:(NSInteger)index {
    
}


@end
