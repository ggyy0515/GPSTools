//
//  AppDelegate+GlobalMethod.h
//  TrCommerce
//
//  Created by Tristan on 15/11/4.
//  Copyright © 2015年 Tristan. All rights reserved.
//

#import "AppDelegate.h"
#import <objc/runtime.h>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface AppDelegate (GlobalMethod)


/**
 *  召唤登录页
 *
 *  @param vc      当前vc
 *  @param isjump  是否退回到首页
 *  @param succeed 
 */
- (void)callLoginWithViewConcontroller:(UIViewController *)vc
                           jumpToMian:(BOOL)isjump
                              succeed:(void(^)(void))succeed;


/**
 *  判断登录状态
 *
 *  @return 登录状态
 */
+ (BOOL)whetherLogin;

/**
 *  删除指定路径的文件
 *
 *  @param path 路径
 */
+ (BOOL)removeFileForPath:(NSString *)path;

/**
 *  推送别名配置
 *
 *  @param oid  oid 
 */
- (void)configPushAlias:(NSString *)oid;

@end
