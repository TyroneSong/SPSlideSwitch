//
//  SubViewController.m
//  SPSlideSwitch
//
//  Created by 石头 on 2018/5/16.
//  Copyright © 2018年 宋璞. All rights reserved.
//

#import "SubViewController.h"

// Controllers

// Models

// Views

// Vendors

// Categories

// Others

@interface SubViewController ()

@end

@implementation SubViewController

#pragma mark - LazyLoad


#pragma mark - LifeCyle

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do view setup here.
    
    [self setupUI];
    
    [self setupData];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Public

#pragma mark - Private
/** 设置UI */
- (void)setupUI {
    self.view.backgroundColor = [UIColor colorWithRed:arc4random()%256 / 255.0 green:arc4random()%256 / 255.0 blue:arc4random()%256 / 255.0 alpha:1];
}

/** 获取数据 */
- (void)setupData {
    
}

#pragma mark - Getter

#pragma mark - Setter

#pragma mark - Delegate


@end
