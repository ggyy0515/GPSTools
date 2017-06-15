//
//  HomePageViewController.m
//  B2CEC
//
//  Created by Tristan on 16/7/25.
//  Copyright © 2016年 Tristan. All rights reserved.
//

#define GET_RADIAN_WITH_ANGLE(a)    (a * M_PI / 180)

#import "HomePageViewController.h"

@interface HomePageViewController ()

@end

@implementation HomePageViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
    UIGraphicsBeginImageContextWithOptions(self.view, NO, self.scale);
    CGContextRefcontext = UIGraphicsGetCurrentContext();
    CGContextTranslateCTM(context, 0, self.size.height);
    CGContextScaleCTM(context, 1.0, -1.0);
    CGContextSetBlendMode(context, kCGBlendModeNormal);
    CGRect rect = CGRectMake(0, 0, self.size.width, self.size.height);
    CGContextClipToMask(context, rect, self.CGImage);
    [color setFill];
    CGContextFillRect(context, rect);
    UIImage*newImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return newImage;

}

- (void)trans3D {
    CALayer *layer1 = [CALayer layer];
    layer1.frame = CGRectMake(50, 50, 100, 100);
    layer1.backgroundColor = [[UIColor blueColor] CGColor];
    [self.view.layer addSublayer:layer1];
    
    CALayer *layer2 = [CALayer layer];
    layer2.frame = CGRectMake(50, 50, 100, 100);
    layer2.backgroundColor = [[UIColor blackColor] CGColor];
    [self.view.layer addSublayer:layer2];
    //位移
    CATransform3D trans3D = CATransform3DMakeTranslation(50, 50, 0);
    layer2.transform = trans3D;
    //位移叠加
    layer2.transform =  CATransform3DTranslate(layer2.transform, 50, 50, 0);
    //缩放
    //    layer2.transform = CATransform3DScale(layer2.transform, 0.5, 0.5, 0);
    
    
    //添加图片
    UIImage *image = [UIImage imageNamed:@"sanjingtianl"];
    layer2.contents = (__bridge_transfer id)image.CGImage;
    
    //旋转
    //    layer2.transform = CATransform3DRotate(layer2.transform, GET_RADIAN_WITH_ANGLE(60), 1, 1, 1);
    
    //翻转
    layer2.transform = CATransform3DInvert(layer2.transform);
    NSLog(@"%@", NSStringFromCGPoint(layer2.anchorPoint));
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
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
