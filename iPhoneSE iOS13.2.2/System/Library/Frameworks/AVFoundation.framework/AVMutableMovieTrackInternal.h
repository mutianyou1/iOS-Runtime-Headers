/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject, AVWeakReference;

@interface AVMutableMovieTrackInternal : NSObject {

	OpaqueFigMutableMovieRef figMutableMovie;
	int trackID;
	OpaqueFigAssetTrackRef figAssetTrack;
	NSObject*<OS_dispatch_semaphore> metadataWaitingSemaphore;
	AVWeakReference* figAssetTrackNotificationListenerWeakReference;
	OpaqueFigAssetTrackRef figAssetTrackNotificationSource;

}
@end

