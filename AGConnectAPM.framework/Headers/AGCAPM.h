//
//  Copyright (c) Huawei Technologies Co., Ltd. 2020. All rights reserved
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface AGCAPM : NSObject

/**
* 获取AGCAPM实例
* @return AGCAPM实例
*/
+ (instancetype)sharedInstance;

/**
* 开启AGCAPM监控
*
*/
- (void)start;

/**
* 设置是否收集和上报应用的性能数据，默认为YES
* @param enable  为YES表示收集并上报性能数据，NO表示不收集且不上报性能数据。
*/
- (void)enableCollection:(BOOL)enable NS_SWIFT_NAME(enableCrashCollection(enable:));

@end

NS_ASSUME_NONNULL_END
