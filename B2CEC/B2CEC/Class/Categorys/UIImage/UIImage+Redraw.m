//
//  UIImage+Redraw.m
//  TrCommerce
//
//  Created by shuhua on 15/11/25.
//  Copyright © 2015年 Tristan. All rights reserved.
//

#import "UIImage+Redraw.h"

@implementation UIImage (Redraw)

-(UIImage *)redrawImageWithSize:(CGSize)size
{
    UIGraphicsBeginImageContext(size);
    [self drawInRect:CGRectMake(0, 0, size.width, size.height)];
    UIImage *scaleImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return scaleImage;
}

@end
