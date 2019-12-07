/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATTaskClientDelegate.h>
#import <libobjc.A.dylib/CRKRequestPerformingProtocol.h>

@protocol CRKTransportProviding;
@class CATTaskClient, NSError, NSString;

@interface CRKSingleConnectionAttemptStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol> {

	id<CRKTransportProviding> mTransportProvider;
	CATTaskClient* mTaskClient;
	NSError* mError;
	BOOL mDidAttemptToConnect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)failWithError:(id)arg1 ;
-(void)connect;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(id)initWithTransportProvider:(id)arg1 ;
-(id)operationForRequest:(id)arg1 ;
-(void)connectIfNeeded;
@end
