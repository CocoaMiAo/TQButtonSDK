//
//  ButtonSDK.h
//
//  Created by Harry MiAo on 2018/12/20.
//  Copyright © 2018 Harry MiAo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ButtonSDK.h"

NS_ASSUME_NONNULL_BEGIN

@interface ButtonSDK : NSObject

#pragma mark - basics
/** 初始化ButtonSDK
 * 建议写到AppDelegate类的初始化方法中,默认发送所有数据，如需自定义请调用+(void)configOptionalDataItemWithArray:(NSArray *)config;方法
 * @param appKey 点扣appKey.
 */
+ (void)startWithAppkey:(NSString *)appKey;

/** 初始化ButtonSDK
 @param appKey 点扣appKey.
 @param userInfo 扩展信息，如果需要记录可以传
 */
+ (void)startWithAppkey:(NSString *)appKey userInfo:(NSString *)userInfo;

/** 配置环境URL
 *  此方法可不调用，如果不调用则使用默认地址
 *  @param url 开发环境请求地址前缀 如:http://192.168.1.101:8081
 */
+ (void)configEnvironmentWithUrlPrefix:(NSString *)url;

/** 配置可选发送的数据
 *  请以字符串形式传入数组 如:[ButtonSDK configOptionalDataItemWithArray:@[@"IPAdress", @"VendorID"]];
 *  @param config 数组参数可填项有：IPAdress, VendorID.不填入或参数填写错误则不会被收集
 */
+ (void)configOptionalDataItemWithArray:(NSArray *)config;

#pragma mark - sessionToken
/** 回传用户sessionToken
 * @param parameter 上传所需的参数.
 * @param requestUrl 上传接口的完整地址，可以为nil默认与上传用户信息的请求地址前缀相同
 */
+ (void)uploadSesstionTokenWithParameter:(NSDictionary *)parameter requestUrl:(NSString *)requestUrl;

#pragma mark - debug mode

///---------------------------------------------------------------------------------------
/// @name  调试模式
///---------------------------------------------------------------------------------------

/** 调试模式
 * 一般不使用，当开发调试或上传的数据有异常时可开启
  */
+ (void)debugModel;

/** 清除所有未发送数据
 * SDK会自动清理已发送成功的数据，此方法可强制清除
 */
+ (void)clearAllData;
@end

NS_ASSUME_NONNULL_END
