//
//  AppDelegate+GlobalMethod.m
//  TrCommerce
//
//  Created by Tristan on 15/11/4.
//  Copyright © 2015年 Tristan. All rights reserved.
//

#import "AppDelegate+GlobalMethod.h"



@implementation AppDelegate (GlobalMethod)



- (void)callLoginWithViewConcontroller:(UIViewController *)vc
                           jumpToMian:(BOOL)isjump
                              succeed:(void(^)(void))succeed{
//    ZTEVLoginViewController *loginVc = [ZTEVLoginViewController new];
//    CMBaseNavigationController *loginNav = [[CMBaseNavigationController alloc] initWithRootViewController:loginVc];
//    [self.window.rootViewController presentViewController:loginNav animated:YES completion:^{
//        
//        if (isjump) {
//            [vc.navigationController popToRootViewControllerAnimated:YES];
//            [(CMBaseTabBarController *)self.window.rootViewController setSelectedIndex:0];
//        }
//        [AppDelegate removeFileForPath:USERINFO_CACHE_PATH];
//        [AppDelegate removeFileForPath:CHARGEINFO_CACHE_PATH];
//        [AppDelegate removeFileForPath:CARSINFO_LIST_CACHE_PATH];
//        succeed();
//    }];
}

+ (BOOL)whetherLogin{
//    if (UnarchiveUserInfoModel) {
//        return YES;
//    }
    return NO;
}


+ (BOOL)removeFileForPath:(NSString *)path{
    
    NSFileManager *fm = [NSFileManager defaultManager];
    NSError *error = nil;
    if ([fm fileExistsAtPath:path]) {
        [fm removeItemAtPath:path error:&error];
        if (!error) {
            return YES;
        }
    }
    return NO;
}

#pragma mark - 推送别名配置
- (void)configPushAlias:(NSString *)oid{
    NSLog(@"别名:   %@",oid);
//    [APService setTags:nil alias:oid callbackSelector:@selector(tagsAliasCallback:tags:alias:) target:self];
}


- (void)tagsAliasCallback:(int)iResCode
                     tags:(NSSet *)tags
                    alias:(NSString *)alias{
    
    NSLog(@"配置推送别名回调-----%d",iResCode);
    
}


@end
