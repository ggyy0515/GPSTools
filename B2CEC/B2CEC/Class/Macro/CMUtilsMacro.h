//
//  CMUtilsMacro.h
//  TrCommerce
//
//  Created by Tristan on 15/11/4.
//  Copyright © 2015年 Tristan. All rights reserved.
//

#ifndef CMUtilsMacro_h
#define CMUtilsMacro_h

#define wenqiu_address                              @"http://10.10.1.110/"

#define wenqiu2_address                             @"http://10.10.1.59/"

#define gaofang_address                             @"http://10.10.1.86:8080/"

#define yinyuan_address                             @"http://10.10.1.123:8080/"

#define huangHu_address                             @"http://10.10.1.234:8080/"

#define wangyue_address                             @"http://10.10.1.99/"

#define xinbin_address                              @"http://10.10.1.66:8084/"

#define lizhiyong_address                           @"http://10.10.1.50:8010/"

#define zhiyong_address                             @"http://10.10.1.32:8010/"

#define inner_server_adderss                        @"http://10.10.1.112/"

#define outside_server_adderss                      @"http://120.24.59.6:5555/"

#define custom_server_address                       @"http://www.maijiusong999.com/"

#define HOST_ADDRESS                                custom_server_address          //切换主机改这里就行






#define HTTP_USER_CONTROLLER_HEAD                   [NSString stringWithFormat:@"%@jf/shuhua/ecmall/usercontroller/",HOST_ADDRESS]
#define HTTP_SHOW_CONTROLLER_HEAD                   [NSString stringWithFormat:@"%@jf/shuhua/ecmall/showindex/",HOST_ADDRESS]
#define HTTP_PRODUCT_CONTROLLER_HEAD                [NSString stringWithFormat:@"%@jf/shuhua/ecmall/productshow/",HOST_ADDRESS]
#define HTTP_USER_ORDER_HEAD                        [NSString stringWithFormat:@"%@jf/shuhua/ecmall/app/order/",HOST_ADDRESS]
#define HTTP_USER_HEAD                              [NSString stringWithFormat:@"%@jf/shuhua/ecmall/app/user/",HOST_ADDRESS]
#define HTTP_USER_ORDERINFO                         [NSString stringWithFormat:@"%@jf/shuhua/ecmall/order/",HOST_ADDRESS]
#define HTTP_PERSINAL_CENTER                        [NSString stringWithFormat:@"%@jf/shuhua/ecmall/app/personal/",HOST_ADDRESS]
#define HTTP_USER_FRIEND                            [NSString stringWithFormat:@"%@jf/shuhua/ecmall/app/userfriend/",HOST_ADDRESS]
#define HTTP_WALLET_HEADER                          [NSString stringWithFormat:@"%@jf/shuhua/ecmall/app/myWallet/",HOST_ADDRESS]
#define HTTP_SEARCH_SHOP_TYPE_HEADER                [NSString stringWithFormat:@"%@jf/shuhua/ecmall/searchshoptype/",HOST_ADDRESS]
#define HTTP_SHOP_TYPE_HEAD                         [NSString stringWithFormat:@"%@jf/shuhua/ecmall/shoptype/",HOST_ADDRESS]
#define HTTP_MYPAYMENT                              [NSString stringWithFormat:@"%@jf/shuhua/ecmall/app/mypayment/",HOST_ADDRESS]
#define HTTP_USER_MESSAGE                           [NSString stringWithFormat:@"%@jf/shuhua/ecmall/message/",HOST_ADDRESS]
#define HTTP_STORE_CATE                             [NSString stringWithFormat:@"%@jf/shuhua/ecmall/app/store/cate/",HOST_ADDRESS]
#define HTTP_SHOP_ORDER                             [NSString stringWithFormat:@"%@jf/shuhua/shoporder/",HOST_ADDRESS]
#define HTTP_WXPAY                                  [NSString stringWithFormat:@"%@jf/shuhua/pay/wxpay/",HOST_ADDRESS]
#define HTTP_DRESS                                  [NSString stringWithFormat:@"%@jf/shuhua/ecmall/app/store/dress/",HOST_ADDRESS]
#define HTTP_UNIONPAY                               [NSString stringWithFormat:@"%@jf/ecmall/unionpay/",HOST_ADDRESS]
#define HTTP_LUCENE                                 [NSString stringWithFormat:@"%@jf/shuhua/ecmall/app/lucene/",HOST_ADDRESS]
#define HTTP_AliPay                                 [NSString stringWithFormat:@"%@jf/shuhua/pay/zhifubao/zhifubaoPay",HOST_ADDRESS]
#define HTTP_Opinion                                [NSString stringWithFormat:@"%@jf/shuhua/ecmall/app/opinion/",HOST_ADDRESS]
#define HTTP_COMMENT                                [NSString stringWithFormat:@"%@jf/shuhua/ecmall/app/comment/",HOST_ADDRESS]

/*
 * 单例
 */

// @interface
#define singleton_interface(className) \
+ (className *)shared##className;


// @implementation
#define singleton_implementation(className) \
static className *_instance; \
+ (id)allocWithZone:(NSZone *)zone \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [super allocWithZone:zone]; \
}); \
return _instance; \
} \
+ (className *)shared##className \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [[self alloc] init]; \
}); \
return _instance; \
}


//菊花消失
#define DISMISSSVP          [SVProgressHUD dismiss];
//默认图
#define DEFAULTIMAGE        [UIImage imageNamed:@"threeOfFour_holder"]

//判断网络请求是否成功
#define IS_REQUEST_SUCCEED(dic)           ([[(dic) objectForKey:@"resultcode"] integerValue] == 10000)
//判断网络请求是否是鉴权失败
#define IS_REQUEST_INVALIDATION(dic)      ([[(dic) objectForKey:@"resultcode"] integerValue] == 20002 || [[(dic) objectForKey:@"resultcode"] integerValue] == 20003 || [[(dic) objectForKey:@"resultcode"] integerValue] == 20004 || [[(dic) objectForKey:@"resultcode"] integerValue] == 20005 )

//请求失效
#define RequestInvalidation               [SVProgressHUD showInfoWithStatus:@"请求失效，请重新登录"];
//网络请求失败
#define RequestFailure                    [SVProgressHUD showInfoWithStatus:@"网络请求失败"];
//网络请求报错
#define RequestError                      [SVProgressHUD showInfoWithStatus:@"网络请求错误"];
//订单列表每页数据量
#define OrderListPageSize                 20

//屏幕
#define SCREENHEIGHT                [UIScreen mainScreen].bounds.size.height
#define SCREENWIDTH                 [UIScreen mainScreen].bounds.size.width
#define kMainScreen_RATIO           (SCREENWIDTH/320.0)
#define kWaterPercentW              ((SCREENHEIGHT)/2.5 - 20)

//sys
#define APP_DELEGATE                ((AppDelegate *)[UIApplication sharedApplication].delegate)
#define SYS_VERSION                 [UIDevice currentDevice].systemVersion.floatValue
#define WEAK_SELF                   typeof(self) __weak weakSelf = self;
#define STRONG_SELF                 typeof(weakSelf) __strong strongSelf = weakSelf;
#define USERDEFAULT                 [NSUserDefaults standardUserDefaults]
#define APPVERSION                  @"APPVERSION"

//系统版本号
#define SystemVersion [[[UIDevice currentDevice] systemVersion] floatValue]

//AES加密Key
#define SESKEY                      @"12345abcDEF67890"

//服务器图片存储路径
#define ServerImagePath [[NSHomeDirectory() stringByAppendingPathComponent:@"Library"] stringByAppendingPathComponent:@"/Caches"]

//各种key和id
#define MAIJIUSONGURL           @"https://itunes.apple.com/cn/app/id1119386686"
#define WEIXINAPPID             @"wxa9292f16afefa119"
#define WEIXINAPPSECRET         @"12ddaa9262486518c44fb1a38ee1f8ad"
#define UMAPPKEY                @"57469a4967e58e774e001295"
#define TENCENTAPPID            @"1105387880"
#define TENCENTAPPKEY           @"d8dUmlO447tyhscB"
#define SINAAPPKEY              @"1328817589"
#define SINAAPPSECRET           @"9affa00c4fc884a800d463ad026dcb43"
#define HUANXINAPPKEY           @"maijiusong999#maijiusong"
#define HUANXINCERNAME_PRD      @"aps_prd"
#define HUANXINCERNAME_DEV      @"aps_dev"
#define JPUSHAPPKEY             @"9dccf6e4f842d7ae50586a36"
#define SHARESDKAPPKEY          @"14326a86c9680"
#define SHARESDKAPPSECRET       @"dffaff9b92b300783d45a9550979240b"
#define GAODEKEY                @"91fcf9bd92777a8011160c6ead0dd343"



//cell
#define IS_NORMAL_RESPONDDELEGATE_FUNC(id,SEL) (id && [id respondsToSelector:SEL])
#define CELL_IDENTIFY_WITH_OBJECT(obj) NSStringFromClass([obj class])


//null
#define OBJ_IS_NULL(obj)                                ([(obj) isKindOfClass:[NSNull class]])
#define STR_IS_NIL_ASSIGNMENT(str)                      (([(str) isKindOfClass:[NSNull class]]) ? (@"") : (str))
#define STR_IS_NullClass(str,nilStr)                    (([(str) isKindOfClass:[NSNull class]]) ? (nilStr) : (str))
#define STR_IS_NIL(str,nilStr)                          ((str == nil) ? (nilStr) : (str))



//param
#define FUNC_IMAGE_SIZE                 50
#define CURRENT_CITY                    @"CURRENT_CITY"
//用户手机号
#define USER_MOBILEPHONE                @"USER_MOBILEPHONE"
#define LOGIN_PASSWORD                  @"USER_PASSWORD"
#define SECRET_KEY                      @"SECRET_KEY"

//记录用户登录时输入的用户名或手机号，第三方登录时该值为@""
#define LOGIN_INPUT_NAME                @"LOGIN_INPUT_NAME"    

//用户id（登录环信）
#define USERIDS                         @"USERIDS"
//用户id(userinfo)
#define USERID                          @"USERID"
//用户名
#define USERNAME                        @"USERNAME"
//用户头像链接
#define USERHEADIMAGEURL                @"USERHEADIMAGEURL"
//用户昵称
#define USERNAMES                       @"USERNAMES"
//用户店名
#define USERTHENAME                     @"USERTHENAME"
//用户店铺介绍
#define USETHESTORE                     @"USETHESTORE"
//用户店铺地址
#define USESTOREADDRESS                 @"USESTOREADDRESS"
//用户是否实名认证  1 认证 0 没有认证
#define USEREALNAMEAUTHENTICATION       @"USEREALNAMEAUTHENTICATION"
//用户是否实体认证  1 认证 0 没有认证
#define USEENTIRYAUTHENTICATION         @"USEENTIRYAUTHENTICATION"
//用户类行  4 普通用户  2商铺用户
#define USERTYPE                        @"USERTYPE"
//加密用的username
#define USERNAME_TO_MD5                 @"USERNAME_TO_MD5"
//用户性别
#define USER_SEX                        @"USER_SEX"
//用户邮箱
#define USER_EMALIL                     @"USER_EMALIL"
 //认证结果:0、正在审核,1、通过认证.2、申请过店铺 但没有实名和实体认证，3、审核未通过 ，4、没有申请过店铺
#define STORE_STATE                     @"STORE_STATE"
//环信登录密码
#define HUANXIN_LOGIN_PASSWORD          @"88888888"
//好友列表
#define USERFRIENDMODELLIST             @"USERFRIENDMODELLIST"//暂未启用

#define USERFRIENDIDSLIST               @"USERFRIENDIDSLIST"
//邀请码(父级)
#define ECINVITECODE                    @"ECINVITECODE"


#endif /* CMUtilsMacro_h */
