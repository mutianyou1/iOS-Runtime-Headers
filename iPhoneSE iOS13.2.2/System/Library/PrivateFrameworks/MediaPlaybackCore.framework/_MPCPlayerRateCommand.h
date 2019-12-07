/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>
#import <libobjc.A.dylib/MPCPlayerRateCommand.h>

@class NSString;

@interface _MPCPlayerRateCommand : _MPCPlayerItemCommand <MPCPlayerRateCommand> {

	float _minimumValue;
	float _maximumValue;

}

@property (assign,nonatomic) float minimumValue;                    //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) float maximumValue;                    //@synthesize maximumValue=_maximumValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMinimumValue:(float)arg1 ;
-(void)setMaximumValue:(float)arg1 ;
-(float)minimumValue;
-(float)maximumValue;
-(id)changeValue:(float)arg1 ;
@end
