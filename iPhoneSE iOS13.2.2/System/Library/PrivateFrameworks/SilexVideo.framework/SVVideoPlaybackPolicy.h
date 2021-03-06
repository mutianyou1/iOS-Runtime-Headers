/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoPlaybackPolicy.h>

@protocol SVVideoPlaybackPolicy <NSObject>
@property (assign,getter=isPlaybackAllowedToStart,nonatomic) BOOL playbackIsAllowedToStart; 
@property (assign,nonatomic) BOOL playbackRequested; 
@required
-(BOOL)isPlaybackAllowedToStart;
-(void)setPlaybackIsAllowedToStart:(BOOL)arg1;
-(BOOL)playbackRequested;
-(void)setPlaybackRequested:(BOOL)arg1;

@end


@class NSString;

@interface SVVideoPlaybackPolicy : NSObject <SVVideoPlaybackPolicy> {

	BOOL _playbackIsAllowedToStart;
	BOOL playbackRequested;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isPlaybackAllowedToStart,nonatomic) BOOL playbackIsAllowedToStart;              //@synthesize playbackIsAllowedToStart=_playbackIsAllowedToStart - In the implementation block
@property (assign,nonatomic) BOOL playbackRequested; 
-(id)init;
-(BOOL)isPlaybackAllowedToStart;
-(void)setPlaybackIsAllowedToStart:(BOOL)arg1 ;
-(BOOL)playbackRequested;
-(void)setPlaybackRequested:(BOOL)arg1 ;
@end

