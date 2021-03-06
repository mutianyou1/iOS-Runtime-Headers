/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoMetadata <NSObject>
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) double framerate; 
@property (nonatomic,readonly) double timePlayed; 
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) double volume; 
@required
-(double)duration;
-(double)time;
-(double)volume;
-(BOOL)muted;
-(double)timePlayed;
-(double)framerate;

@end

