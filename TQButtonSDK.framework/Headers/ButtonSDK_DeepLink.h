//
//  ButtonSDK_DeepLink.h
//  ButtonSDKDemo
//
//  Created by Harry MiAo on 2018/12/21.
//  Copyright © 2018 Harry MiAo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ButtonSDK_DeepLink : NSObject

/** deeplink调用
 *  @param deepLinkUrl 跳转链接
 */
+ (void)launchDeepLinkWithUrl:(NSURL *)deepLinkUrl;

@end

NS_ASSUME_NONNULL_END
