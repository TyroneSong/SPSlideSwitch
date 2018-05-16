//
//  SPSlideSwitch.h
//  SPSlideSwitch
//
//  Created by 石头 on 2018/5/15.
//  Copyright © 2018年 宋璞. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SPSlideSwitchDelegate.h"
#import "SPSlideSegmented.h"


@interface SPSlideSwitch : UIView


/**
 * 需要显示的视图
 */
@property (nonatomic, strong) NSArray *viewControllers;
/**
 * 标题
 */
@property (nonatomic, strong) NSArray *titles;
/**
 * 选中位置
 */
@property (nonatomic, assign) NSInteger selectedIndex;
/**
 * 按钮正常时的颜色
 */
@property (nonatomic, strong) UIColor *itemNormalColor;
/**
 * 按钮选中时的颜色
 */
@property (nonatomic, strong) UIColor *itemSelectedColor;
/**
 * 隐藏阴影
 */
@property (nonatomic, assign) BOOL hideShadow;
/**
 隐藏底部分割线
 */
@property (nonatomic, assign) BOOL hideBottomLine;
/**
 * 用户自定义标题间距
 */
@property (nonatomic, assign) CGFloat customTitleSpacing;

/**
 * 更多按钮
 */
@property (nonatomic, strong) UIButton *moreButton;

/**
 * 代理方法
 */
@property (nonatomic, weak) id <SPSlideSwitchDelegate>delegate;
/**
 * 初始化方法
 */
-(instancetype)initWithFrame:(CGRect)frame slideDirection:(SPSlideSegmentedDirection)direction Titles:(NSArray <NSString *>*)titles viewControllers:(NSArray <UIViewController *>*)viewControllers;

/**
 * 标题显示在ViewController中
 */
-(void)showInViewController:(UIViewController *)viewController;
/**
 * 标题显示在NavigationBar中
 * 在垂直方向上无效
 */
-(void)showInNavigationController:(UINavigationController *)navigationController;

@end
