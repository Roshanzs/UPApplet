//
//  UPBaseApi.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^apiCallbackBlock)(NSDictionary * _Nullable obj);

@interface UPBaseApi : NSObject

/// 回调的id
@property(nonatomic,strong)NSString *callBackId;

/// api名称数组
-(NSArray *)RegisterApis;

/// 异步方法
/// @param arg JS层传递过来的参数
/// @param apiBlock 原生处理完返回给JS的回调（回调数据类型为NSDictionary）
-(void)process:(NSString *)arg WithBlock:(apiCallbackBlock)apiBlock;


/// 同步方法
/// @param arg JS层传递过来的参数
-(id)process:(NSString *)arg;

@end

NS_ASSUME_NONNULL_END
