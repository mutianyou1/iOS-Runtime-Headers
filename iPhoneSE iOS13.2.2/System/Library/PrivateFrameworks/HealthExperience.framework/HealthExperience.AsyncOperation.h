/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface HealthExperience.AsyncOperation : NSOperation {

	 underlyingState;
	 stateLock;

}

@property (readonly,nonatomic) BOOL executing; 
@property (readonly,nonatomic) BOOL finished; 
@property (readonly,nonatomic) BOOL asynchronous; 
-(id)init;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
@end

