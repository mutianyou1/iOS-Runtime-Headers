/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTTransitionScheduler.h>

@class NSTimer;

@interface AVTConcurrentTransitionScheduler : NSObject <AVTTransitionScheduler> {

	/*^block*/id _eventHandler;
	NSTimer* _transitionTimer;
	double _delay;

}

@property (nonatomic,retain) NSTimer * transitionTimer;              //@synthesize transitionTimer=_transitionTimer - In the implementation block
@property (nonatomic,readonly) double delay;                         //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy,readonly) id eventHandler;                 //@synthesize eventHandler=_eventHandler - In the implementation block
-(void)stop;
-(double)delay;
-(id)eventHandler;
-(id)initWithEventHandler:(/*^block*/id)arg1 ;
-(id)initWithEventHandler:(/*^block*/id)arg1 delay:(double)arg2 ;
-(void)scheduleEvent;
-(void)didCompleteEvent;
-(NSTimer *)transitionTimer;
-(void)scheduleTransitionTimer;
-(void)setTransitionTimer:(NSTimer *)arg1 ;
@end
