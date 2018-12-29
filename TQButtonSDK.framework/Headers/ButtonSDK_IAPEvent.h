//
//  ButtonSDK_IAPEvent.h
//  ButtonSDKDemo
//
//  Created by Harry MiAo on 2018/12/21.
//  Copyright © 2018 Harry MiAo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ButtonSDK_IAPEvent : NSObject
/** 上传用户IAP
 * @param requestUrl 上传接口的完整地址，可以为nil使用默认地址
 */
+ (void)uploadIPAEventWithRequestUrl:(NSString *)requestUrl;

@end

NS_ASSUME_NONNULL_END
