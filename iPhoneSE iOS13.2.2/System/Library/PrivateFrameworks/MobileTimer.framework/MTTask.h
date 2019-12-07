/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MTGCDTimer;

@interface MTTask : NSObject {

	NSString* _identifier;
	double _delay;
	/*^block*/id _completableBlock;
	MTGCDTimer* _timer;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double delay;                     //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy) id completableBlock;                //@synthesize completableBlock=_completableBlock - In the implementation block
@property (nonatomic,retain) MTGCDTimer * timer;               //@synthesize timer=_timer - In the implementation block
+(id)taskWithIdentifier:(id)arg1 delay:(double)arg2 completableBlock:(/*^block*/id)arg3 ;
+(id)taskWithIdentifier:(id)arg1 completableBlock:(/*^block*/id)arg2 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(MTGCDTimer *)timer;
-(void)setTimer:(MTGCDTimer *)arg1 ;
-(id)completableBlock;
-(void)setCompletableBlock:(id)arg1 ;
@end
