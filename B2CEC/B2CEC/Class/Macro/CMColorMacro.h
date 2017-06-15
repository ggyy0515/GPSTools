//
//  CMColorMacro.h
//  TrCommerce
//
//  Created by Tristan on 15/11/4.
//  Copyright © 2015年 Tristan. All rights reserved.
//

#ifndef CMColorMacro_h
#define CMColorMacro_h

//method
#define UIColorFromRGB(r,g,b)         [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define UIColorFromRGBA(r,g,b,a)      [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
#define UIColorFromHexString(value)   [UIColor colorWithHexString:value alpha:1.0f]




//mainColor
#define MainColor               UIColorFromHexString(@"#fb476f")
//文字主色调
#define MainTextColor           UIColorFromHexString(@"#333333")
//深灰色文字色调
#define DarkGrayTextColor       [UIColor colorWithRed:0.44 green:0.44 blue:0.44 alpha:1]
//浅灰色文字色调
#define LightGrayTextColor      [UIColor colorWithRed:0.84 green:0.84 blue:0.84 alpha:1]
//浅灰色背景色调
#define LightGrayBgColor        [UIColor colorWithRed:0.96 green:0.96 blue:0.96 alpha:1]
//浅灰色线
#define GrayLineColor           [UIColor colorWithRed:0.94 green:0.94 blue:0.94 alpha:1]
//透明色
#define ClearColor              [UIColor clearColor]


//pitcure
//读取本地图片
#define LOADIMAGE(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:ext]]

//占位图
#define SFPlaceHolderImage  [UIImage imageNamed:@"threeOfFour_holder"]
//默认头像
#define HeardImage          [UIImage imageNamed:@"set_heardImage"]

//定义UIImage对象
#define LOADPNGIMAGE(A) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:A ofType:nil]]

#endif /* CMColorMacro_h */
