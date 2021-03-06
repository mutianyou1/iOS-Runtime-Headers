/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ADWatchDog : NSObject {

	NSString* _reason;
	unsigned long long _delayTime;

}

@property (nonatomic,retain) NSString * reason;                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long delayTime;              //@synthesize delayTime=_delayTime - In the implementation block
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)setDelayTime:(unsigned long long)arg1 ;
-(unsigned long long)delayTime;
-(id)initWithReason:(id)arg1 andDelay:(unsigned long long)arg2 ;
-(void)updateReason:(id)arg1 ;
@end

