/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOperation.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>

@class AVAssetWriterFigAssetWriterNotificationHandler, NSString;

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {

	OpaqueFigAssetWriterRef _figAssetWriter;
	AVAssetWriterFigAssetWriterNotificationHandler* _notificationHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(BOOL)isAsynchronous;
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
-(void)didEnterTerminalState;
@end

