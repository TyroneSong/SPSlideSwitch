//
//  SPSlideSegmented.h
//  SPSlideSwitch
//
//  Created by 石头 on 2018/5/15.
//  Copyright © 2018年 宋璞. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, SPSlideSegmentedDirection) {
    SPSlideSegmentedDirectionHorizontal,
    SPSlideSegmentedDirectionVerticality,
};

@protocol SPSlideSegmentedDelegate <NSObject>

- (void)slideSegmentDidSelectedAtIndex:(NSInteger)index;

@end

@interface SPSlideSegmented : UIView

@property (nonatomic, assign) NSInteger selectedIndex;

@property (nonatomic, strong) NSArray *titles;

@property (nonatomic, strong) UIColor *itemNormalColor;

@property (nonatomic, strong) UIColor *itemSelectedColor;
//在navigation上显示标题
@property (nonatomic, assign) BOOL showTitlesInNavBar;
//隐藏标题底部阴影
@property (nonatomic, assign) BOOL hideShadow;
//隐藏底部分割线
@property (nonatomic, assign) BOOL hideBottomLine;
//代理
@property (nonatomic, weak) id<SPSlideSegmentedDelegate>delegate;
//动画执行进度
@property (nonatomic, assign) CGFloat progress;
//忽略动画
@property (nonatomic, assign) BOOL ignoreAnimation;
/**
 * 用户自定义标题间距
 */
@property (nonatomic, assign) CGFloat customTitleSpacing;

/**
 * 更多按钮
 */
@property (nonatomic, strong) UIButton *moreButton;


/** 新建Segmented */
- (instancetype)initWithSlideSegmentedDirction:(SPSlideSegmentedDirection)direction;

@end
