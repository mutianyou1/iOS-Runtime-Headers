/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaLibrary.h>

@interface VUIDeviceMediaLibrary : VUIMediaLibrary

@property (getter=isUpdating,nonatomic,readonly) BOOL updating; 
@property (getter=isInitialUpdateInProgress,nonatomic,readonly) BOOL initialUpdateInProgress; 
-(BOOL)isUpdating;
-(BOOL)isInitialUpdateInProgress;
-(void)updateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateFromCloudWithReason:(long long)arg1 ;
@end

