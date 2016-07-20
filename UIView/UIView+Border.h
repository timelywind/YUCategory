//
//  UIView+Border.h
//  WConfirmViewDemo
//
//  Created by snow on 15/9/9.
//  Copyright (c) 2015年 yojianzhi. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
	WLocateTop = 0,
	WLocateLeft,
	WLocateBottom,
	WLocateRight,
} WlocateDirection;

@interface UIView (Border)

/**
 *  在 View 上画一条横线
 *	1234 上左下右
 */
- (void)drawLineWithColor:(UIColor *)color locate:(WlocateDirection)locate andPedding:(NSInteger)pedding;
/**
 *  在 View 上画一条横线
 */
- (void)drawLineWithColor:(UIColor *)color andFrame:(CGRect)frame;

@end
