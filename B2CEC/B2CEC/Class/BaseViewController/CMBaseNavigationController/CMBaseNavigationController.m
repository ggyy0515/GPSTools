//
//  CMBaseNavigationController.m
//  TrCommerce
//
//  Created by Tristan on 15/11/4.
//  Copyright © 2015年 Tristan. All rights reserved.
//

#import "CMBaseNavigationController.h"


@interface CMBaseNavigationController ()

@end

@implementation CMBaseNavigationController

#pragma mark - life cycle

- (void)viewDidLoad {
    [super viewDidLoad];
    [self createUI];
}

-(void)createUI{
    [UIApplication sharedApplication].statusBarStyle = UIStatusBarStyleLightContent;
    [[UINavigationBar appearance] setTintColor:[UIColor whiteColor]];
    [[UINavigationBar appearance] setTitleTextAttributes: [NSDictionary dictionaryWithObjectsAndKeys:
                                                           [UIColor whiteColor], NSForegroundColorAttributeName, [UIFont boldSystemFontOfSize:20], NSFontAttributeName, nil]];
    self.navigationBar.translucent = NO;
    if (SYS_VERSION < 7.f) {
        self.navigationBar.tintColor = MainColor;
    }else{
        self.navigationBar.barTintColor = MainColor;
    }

}



- (UIView*)createTitleView:(NSString*)str{
    _titleLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 2, 100, 44)];
    _titleLabel.text = str;
    _titleLabel.textAlignment = NSTextAlignmentCenter;
    _titleLabel.backgroundColor = [UIColor clearColor];
    _titleLabel.font = [UIFont boldSystemFontOfSize:20.0];
    _titleLabel.textColor = [UIColor whiteColor];
    self.navigationItem.titleView = _titleLabel;
    
    return self.navigationItem.titleView;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

#pragma mark - actions

-(void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated{

    if (self.viewControllers.count) {
        viewController.hidesBottomBarWhenPushed = YES;
    }
    
    [super pushViewController:viewController animated:YES];
}

-(void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated titleLabel:(NSString *)title{
    
    if (viewController.navigationItem.titleView== nil){
        viewController.navigationItem.titleView = [self createTitleView:title];
    }
    [self pushViewController:viewController animated:animated];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
