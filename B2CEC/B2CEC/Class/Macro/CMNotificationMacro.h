//
//  CMNotificationMacro.h
//  TrCommerce
//
//  Created by Tristan on 15/11/4.
//  Copyright © 2015年 Tristan. All rights reserved.
//

#ifndef CMNotificationMacro_h
#define CMNotificationMacro_h

//add notifition
#define POST_NOTIFICATION(NotifationName,obj) [[NSNotificationCenter defaultCenter] postNotificationName: NotifationName object:obj]

//add observer
#define ADD_OBSERVER_NOTIFICATION(id,SEL,Name,obj) [[NSNotificationCenter defaultCenter] addObserver:id selector:SEL name:Name object:obj]

//remove observe
#define REMOVE_NOTIFICATION(id,Name,obj)  [[NSNotificationCenter defaultCenter] removeObserver:id name:Name object:obj]


//noticeName
//回到前台
#define NOTIFACATION_NAME_APPRETUENFROMBACKGROUND                       @"NOTIFACATION_NAME_APPRETUENFROMBACKGROUND"
//登录成功
#define NOTIFACATION_NAME_HASLOGINSUCCEED                               @"NOTIFACATION_NAME_HASLOGINSUCCEED"
//切换了城市
#define NOTIFACATION_NAME_HASCHANGECITY                                 @"NOTIFACATION_NAME_HASCHANGECITY"
//修改收货地址城市
#define NOTIFACATION_NAME_ChangeAddressCity                             @"NOTIFACATION_NAME_ChangeAddressCity"
//更新收货地址列表
#define NOTIFACATION_NAME_UpdateAddressList                             @"NOTIFACATION_NAME_UpdateAddressList"
//更新购物车列表
#define NOTIFACATION_NAME_UpdateCart                                    @"NOTIFACATION_NAME_UpdateCart"
//有新的未读消息
#define NOTIFACATION_NAME_NEWNOTICE                                     @"NOTIFACATION_NAME_NEWNOTICE"
//跳转到通知中心
#define NOTIFACATION_NAME_HAS_TO_NOTICE_CENTER                          @"NOTIFACATION_NAME_HAS_TO_NOTICE_CENTER"
//选择店铺地址城市
#define NOTIFACATION_NAME_ChooseShopCity                                @"NOTIFACATION_NAME_ChooseShopCity"
//取消了订单
#define NOTIFACATION_NAME_NEED_RELOADORDERLIST                          @"NOTIFACATION_NAME_NEED_RELOADORDERLIST"
//需要重新加载im未读信息数量
#define NOTIFACATION_NAME_NEED_RELOADO_IM_UNREAD_MSG_COUNT              @"NOTIFACATION_NAME_NEED_RELOADO_IM_UNREAD_MSG_COUNT"
//换了头像发个通知
#define NOTIFACATION_NAME_HASCHANGE_HEADIMAGE                           @"NOTIFACATION_NAME_HASCHANGE_HEADIMAGE"
//评论完成发个通知
#define NOTIFACATION_NAME_HAS_COMMENT                                   @"NOTIFACATION_NAME_HAS_COMMENT"
//提交完成订单发个通知
#define NOTIFACATION_NAME_HAS_COMMIT_ORDER                              @"NOTIFACATION_NAME_HAS_COMMIT_ORDER"


#endif /* CMNotificationMacro_h */
