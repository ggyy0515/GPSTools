//
//  CMBaseTabBarController.m
//  TrCommerce
//
//  Created by Tristan on 15/11/3.
//  Copyright © 2015年 Tristan. All rights reserved.
//

#import "CMBaseTabBarController.h"
//#import "ECHomePageViewController.h"
//#import "ECCategViewController.h"
//#import "ECCartViewController.h"
//#import "ECMineViewController.h"
@implementation CMBaseTabBarController

-(void)viewDidLoad{
    [super viewDidLoad];
    [self loadTabbarViewController];
    
}

-(void)loadTabbarViewController{
    self.tabBar.tintColor = UIColorFromHexString(@"#fb476f");
    
//    ECHomePageViewController *homePageVC = [[ECHomePageViewController alloc] init];
//    homePageVC.title = @"首页";
//    homePageVC.tabBarItem.image = LOADIMAGE(@"bnt_Home@2x", @"png");
//    homePageVC.tabBarItem.selectedImage = LOADIMAGE(@"bnt_Home_selecter@2x", @"png");
//    CMBaseNavigationController *homePageNav = [[CMBaseNavigationController alloc] initWithRootViewController:homePageVC];
//    
//    ECCategViewController *categVC = [[ECCategViewController alloc] init];
//    categVC.title = @"分类";
//    categVC.tabBarItem.image = LOADIMAGE(@"bnt_Sort@2x", @"png");
//    categVC.tabBarItem.selectedImage = LOADIMAGE(@"bnt_Sort_selecter@2x", @"png");
//    CMBaseNavigationController *categNav = [[CMBaseNavigationController alloc] initWithRootViewController:categVC];
//    
//    ECCartViewController *cartVC = [[ECCartViewController alloc] init];
//    cartVC.title = @"购物车";
//    cartVC.tabBarItem.image = LOADIMAGE(@"bnt_Basket@2x", @"png");
//    cartVC.tabBarItem.selectedImage = LOADIMAGE(@"bnt_Basket_selecter@2x", @"png");
//    CMBaseNavigationController *cartNav = [[CMBaseNavigationController alloc] initWithRootViewController:cartVC];
//    
//    ECMineViewController *mineVC = [[ECMineViewController alloc] init];
//    mineVC.title = @"我的";
//    mineVC.tabBarItem.image = LOADIMAGE(@"bnt_my@2x", @"png");
//    mineVC.tabBarItem.selectedImage = LOADIMAGE(@"bnt_my_selecter@2x", @"png");
//    CMBaseNavigationController *mineNav = [[CMBaseNavigationController alloc] initWithRootViewController:mineVC];
//    
//    self.viewControllers = [NSArray arrayWithObjects:homePageNav, categNav, cartNav, mineNav, nil];

}


@end
