//
//  ADManager.h
//  QFCreater
//
//  Created by douglas on 2018/10/11.
//  Copyright © 2018 douglas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"
#import "AVOSCloud.h"
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^GetADSuccess)(void);
typedef void(^GetADFailure)(void);
@interface ADManager : NSObject
@property (nonatomic, assign) BOOL adHasShow;
@property (nonatomic, assign) AFNetworkReachabilityStatus currentState;
@property (nonatomic, strong) AFNetworkReachabilityManager *manager;
@property(nonatomic,strong) GetADSuccess success;
@property(nonatomic,strong) GetADFailure failure;
//预加载广告资源
+ (instancetype)shareInstance;
- (void)prloadADSuccess:(GetADSuccess)success
                failure:(GetADFailure)failure;
- (BOOL)adEnable;
- (NSString *)getLoadURL;
- (BOOL)showAD;
@end

NS_ASSUME_NONNULL_END
