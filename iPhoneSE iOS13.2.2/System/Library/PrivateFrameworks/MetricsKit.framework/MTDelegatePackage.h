/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTDelegatePackage <NSObject>
@property (nonatomic,readonly) id<MTConfigDelegate> configDelegate; 
@property (nonatomic,readonly) id<MTEventRecorderDelegate> eventRecorderDelegate; 
@property (nonatomic,readonly) id<MTEnvironmentDelegate> environmentDelegate; 
@required
-(id<MTConfigDelegate>)configDelegate;
-(id<MTEventRecorderDelegate>)eventRecorderDelegate;
-(id<MTEnvironmentDelegate>)environmentDelegate;

@end

