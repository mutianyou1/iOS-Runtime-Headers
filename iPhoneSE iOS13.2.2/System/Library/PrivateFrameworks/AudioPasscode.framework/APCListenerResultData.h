/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APCListenerResultData : NSObject {

	unsigned long long _completionTime;

}

@property (assign,nonatomic) unsigned long long completionTime;              //@synthesize completionTime=_completionTime - In the implementation block
-(BOOL)isValid;
-(void)reset;
-(unsigned long long)completionTime;
-(id)initWithPasscodeDurationNSec:(unsigned long long)arg1 ;
-(void)setCompletionTime:(unsigned long long)arg1 ;
@end

