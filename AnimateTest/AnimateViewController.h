//
//  ViewController.h
//  AnimateTest
//
//  Created by mac on 15/12/31.
//  Copyright © 2015年 shiziwen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnimateViewController : UIViewController {
    CALayer *_animationLayer;
    CAShapeLayer *_pathLayer;
}

@property (nonatomic, strong) CALayer *animationLayer;
@property (nonatomic, strong) CAShapeLayer *pathLayer;

@end

