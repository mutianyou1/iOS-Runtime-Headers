/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NFWaiter : NSObject {

	double _interval;
	double _timeout;

}

@property (nonatomic,readonly) double interval;              //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double timeout;               //@synthesize timeout=_timeout - In the implementation block
+(id)error;
+(void)waitFor:(/*^block*/id)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
+(void)waitUntil:(/*^block*/id)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
+(id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(/*^block*/id)arg3 ;
+(id)waitWithInterval:(double)arg1 timeout:(double)arg2 conditionProvider:(/*^block*/id)arg3 ;
+(id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(/*^block*/id)arg3 condition:(/*^block*/id)arg4 ;
+(id)waitWithTimeout:(double)arg1 valueProvider:(/*^block*/id)arg2 ;
+(id)waitWithTimeout:(double)arg1 conditionProvider:(/*^block*/id)arg2 ;
-(double)interval;
-(double)timeout;
@end
