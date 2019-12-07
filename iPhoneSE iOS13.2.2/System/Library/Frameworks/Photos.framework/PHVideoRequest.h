/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHMediaRequest.h>

@protocol PHVideoRequestDelegate;
@class PHVideoResult, PHImageDisplaySpec, PHVideoRequestBehaviorSpec;

@interface PHVideoRequest : PHMediaRequest {

	PHVideoResult* _videoResult;
	id<PHVideoRequestDelegate> _delegate;
	PHImageDisplaySpec* _displaySpec;
	PHVideoRequestBehaviorSpec* _behaviorSpec;

}

@property (nonatomic,__weak,readonly) id<PHVideoRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PHImageDisplaySpec * displaySpec;                        //@synthesize displaySpec=_displaySpec - In the implementation block
@property (nonatomic,readonly) PHVideoRequestBehaviorSpec * behaviorSpec;               //@synthesize behaviorSpec=_behaviorSpec - In the implementation block
-(id<PHVideoRequestDelegate>)delegate;
-(void)_finish;
-(BOOL)isSynchronous;
-(void)startRequest;
-(PHImageDisplaySpec *)displaySpec;
-(PHVideoRequestBehaviorSpec *)behaviorSpec;
-(id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSepc:(id)arg7 delegate:(id)arg8 ;
-(void)_handleResultVideoURL:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)videoURLBecameAvailable:(id)arg1 info:(id)arg2 error:(id)arg3 ;
@end
