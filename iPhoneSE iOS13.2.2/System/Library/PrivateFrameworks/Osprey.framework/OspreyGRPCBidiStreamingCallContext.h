/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Osprey/OspreyGRPCCallContext.h>

@class NSURLSessionStreamTask, NSMutableArray;

@interface OspreyGRPCBidiStreamingCallContext : OspreyGRPCCallContext {

	NSURLSessionStreamTask* _streamTask;
	NSMutableArray* _bufferedFrames;

}
-(void)_writeFrame:(id)arg1 streamTask:(id)arg2 ;
-(void)_handleStreamTask:(id)arg1 ;
-(void)writeFrame:(id)arg1 ;
@end
