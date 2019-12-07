/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUINowPlayingTimeBoundFeature.h>

@protocol VUINowPlayingTimeBoundFeature <VUINowPlayingFeature>
@property (assign,nonatomic) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (assign,getter=isSkippable,nonatomic) BOOL skippable; 
@required
-(double)duration;
-(double)startTime;
-(void)setStartTime:(double)arg1;
-(BOOL)isSkippable;
-(void)setSkippable:(BOOL)arg1;

@end


@class NSString;

@interface VUINowPlayingTimeBoundFeature : NSObject <VUINowPlayingTimeBoundFeature> {

	BOOL _active;
	BOOL _autoRemove;
	BOOL _skippable;
	double _startTime;
	double _duration;
	id _userInfo;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove;              //@synthesize autoRemove=_autoRemove - In the implementation block
@property (assign,nonatomic) double startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isSkippable,nonatomic) BOOL skippable;                    //@synthesize skippable=_skippable - In the implementation block
@property (nonatomic,retain) id userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)userInfo;
-(BOOL)isActive;
-(void)setUserInfo:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(double)duration;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(BOOL)isSkippable;
-(void)setSkippable:(BOOL)arg1 ;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 startTime:(double)arg2 duration:(double)arg3 ;
@end
