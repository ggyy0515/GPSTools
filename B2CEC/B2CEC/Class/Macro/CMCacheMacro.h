//
//  CMCacheMacro.h
//  TrCommerce
//
//  Created by Tristan on 15/11/4.
//  Copyright © 2015年 Tristan. All rights reserved.
//

#ifndef CMCacheMacro_h
#define CMCacheMacro_h


//*******************************************************currentCity**********************************************************//
//currentCity存储路径
#define  CURRENT_CITY_PATH                 ((NSString *)[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0]stringByAppendingPathComponent:@"currentCity.plist"])

//从plist解析currentCity数据模型
#define UnarchiveCurrentCityModel          ((ECCityInfoModel *)[NSKeyedUnarchiver unarchiveObjectWithFile:CURRENT_CITY_PATH])

//存储currentCity数据模型为plist
#define RearchiverCurrentCityModel(id)     [NSKeyedArchiver archiveRootObject:id toFile:CURRENT_CITY_PATH]


////*******************************************************chargeInfo**********************************************************//
////userInfo存储路径
//#define  CHARGEINFO_CACHE_PATH  ((NSString *)[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0]stringByAppendingPathComponent:@"chargeinfo.plist"])
//
////从plist解析userInfo数据模型
//#define UnarchiveChargeInfoModel  ((ZTEVChargeStateModel *)[NSKeyedUnarchiver unarchiveObjectWithFile:CHARGEINFO_CACHE_PATH])
//
////存储userInfo数据模型为plist
//#define RearchiverChargeInfoModel(id)  [NSKeyedArchiver archiveRootObject:id toFile:CHARGEINFO_CACHE_PATH]
//
////*******************************************************carsInfo**********************************************************//
////carsInfo存储路径
//#define  CARSINFO_LIST_CACHE_PATH  ((NSString *)[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0]stringByAppendingPathComponent:@"carsInfoList.plist"])
//
////从plist解析carsInfoList
//#define UnarchiveCarsInfoList  ((NSArray *)[NSKeyedUnarchiver unarchiveObjectWithFile:CARSINFO_LIST_CACHE_PATH])
//
////存储userInfo数据模型为plist
//#define RearchiverCarsInfoList(array)  [NSKeyedArchiver archiveRootObject:array toFile:CARSINFO_LIST_CACHE_PATH]






#endif /* CMCacheMacro_h */
