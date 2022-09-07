//
//  UPAppletClient.h
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UPAppletClient : NSObject

+(instancetype)UPShare;

/// 初始化SDK
/// @param appkey 申请的appkey
/// @param secret 申请的secret
-(void)UPInitWithAppKey:(nonnull NSString *)appkey WithSecret:(nonnull NSString *)secret;


/// 打开指定小程序
/// @param appID 小程序的appID
-(void)UPOpenAppletWithAppID:(NSString *)appID;


/// 添加自定义的api(需要先执行UPOpenAppletWithAppID)
/// @param apis api实例数组
-(void)UPRegisterCustomApis:(NSArray *)apis;


/// 添加自定义的原生视图
/// @param NativeViewDic 原生视图字典
-(void)UPRegisterCustomNativeViews:(NSDictionary *)NativeViewDic;

@end

NS_ASSUME_NONNULL_END
