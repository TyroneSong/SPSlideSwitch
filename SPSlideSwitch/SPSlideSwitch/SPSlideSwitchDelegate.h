//
//  SPSlideSwitchDelegate.h
//  SPSlideSwitch
//
//  Created by 石头 on 2018/5/15.
//  Copyright © 2018年 宋璞. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SPSlideSwitchDelegate <NSObject>
/**
 * 切换位置后的代理方法
 */
- (void)slideSwitchDidselectAtIndex:(NSInteger)index;

@end
