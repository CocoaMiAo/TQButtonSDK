# TQButtonSDK使用说明

## 一、结构介绍

- ButtonSDK 核心类 提供了SDK基础采集及上传数据功能                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
- ButtonSDK_DeepLink 提供了deeplink功能，需要时导入
- ButtonSDK_IAPEvent 提供了IAP上传功能，需要时导入

## 二、方法介绍

## 1. ButtonSDK

  `+ (void)startWithAppkey:(NSString *)appKey`

初始化SDK方法，需要传入appkey。建议写到AppDelegate类的初始化方法中,默认发送所有数据，如需自定义请调用+(void)configOptionalDataItemWithArray:(NSArray *)config;方法。



 `+ (void)startWithAppkey:(NSString *)appKey userInfo:(NSString *)userInfo`

同样为SDK初始化方法，增加了一个参数用来传递扩展信息。



 `+ (void)configEnvironmentWithUrlPrefix:(NSString *)url`

用来配置上传接口地址的方法，参数用来传接口的前缀  如:http://192.168.1.101:8081，不调用此方法将使用默认配置的接口地址。



`+(void)configOptionalDataItemWithArray:(NSArray *)config`

用来配置可选发送的数据,请以字符串形式传入数组 如:[ButtonSDK configOptionalDataItemWithArray:@[@"IPAdress", @"VendorID"]] ;config 数组参数可填项有：IPAdress, VendorID.不填入或参数填写错误则不会被收集。



`+ (void)uploadSesstionTokenWithParameter:(NSDictionary *)parameter requestUrl:(NSString *)requestUrl`

用来上传用户sessionToken，requestUrl参数为上传接口的**完整地址**，可以填nil默认与上传用户信息的请求地址前缀相同。



`+ (void)debugModel`

调用此方法可开启调试模式，控制台会输出所有关键log。



`+ (void)clearAllData`

该方法用于强制清除所有缓存在本地的待发送数据，SDK自带缓存回收及内存保护机制，此方法不建议在正常情况下使用。



### 2.ButtonSDK_DeepLink

`+ (void)launchDeepLinkWithUrl:(NSURL *)deepLinkUrl`

参数传入url即可。



### 3.ButtonSDK_IAPEvent

`+ (void)uploadIPAEventWithRequestUrl:(NSString *)requestUrl`

该方法用于上传用户的IPA，参数requestUrl填入完整的请求url，如填写为nil，则调用配置的默认请求地址。



## 三、使用方法

1.配置工程infp.plist的ATS配置，否则无法正常上传数据以及无法获取ip地址。

2.导入framework包即可使用，调用方法没有顺序限制，但建议按照demo所调用的顺序调用。具体的使用可参考demo使用。



## 四、版本记录

| 版本号 | 更新日期   |
| :----- | :--------- |
| V1.0.1 | 2018.12.29 |
| V1.0.0 | 2018.12.24 |

