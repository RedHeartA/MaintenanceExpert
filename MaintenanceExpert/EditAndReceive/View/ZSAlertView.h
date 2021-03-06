//
//  ZSAlertView.h
//  MaintenanceExpert
//
//  Created by koka on 16/11/3.
//  Copyright © 2016年 ZSYW. All rights reserved.
//

#import <Foundation/Foundation.h>

/** alertView的回调block */

typedef void (^CallBackBlock)(NSInteger btnIndex);

@interface ZSAlertView : NSObject

/**
 * 有两个或者多个按钮 确定 取消
 * @param title             提示的标题
 * @param message           提示信息
 * @param btnTitle          单个按钮的标题名称
 * @param cancelButtonTitle 取消按钮
 * @param destructiveBtn    destructiveBtn按钮
 * @param otherButtonTitles 确定按钮
 */
+ (void)showAlertViewWith:(UIViewController *)viewController title:(NSString *)title message:(NSString *)message
            CallBackBlock:(CallBackBlock)textBlock cancelButtonTitle:(NSString *)cancelBtnTitle
   destructiveButtonTitle:(NSString *)destructiveBtnTitle
        otherButtonTitles:(NSString *)otherBtnTitles,...NS_REQUIRES_NIL_TERMINATION;

@end
