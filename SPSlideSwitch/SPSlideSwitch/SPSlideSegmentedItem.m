//
//  SPSlideSegmentedItem.m
//  SPSlideSwitch
//
//  Created by 石头 on 2018/5/16.
//  Copyright © 2018年 宋璞. All rights reserved.
//

#import "SPSlideSegmentedItem.h"

@implementation SPSlideSegmentedItem

- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        [self buildUI];
    }
    return self;
}

- (void)buildUI {
    _textLabel = [[UILabel alloc] init];
    _textLabel.textAlignment = NSTextAlignmentCenter;
    [self.contentView addSubview:_textLabel];
}

- (void)layoutSubviews {
    [super layoutSubviews];
    _textLabel.frame = self.bounds;
}

@end
