/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OSASubmissionClient.framework/OSASubmissionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSASubmissionClient/OSASubmissionServices.h>

@protocol OSASubmissionServices;
@class NSXPCConnection, NSString;

@interface OSASubmissionClient : NSObject <OSASubmissionServices> {

	NSXPCConnection* _connection;
	id<OSASubmissionServices> _synchRemoteObjectProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)submitWithOptions:(id)arg1 resultsCallback:(/*^block*/id)arg2 ;
-(id)initWithErrorHandler:(/*^block*/id)arg1 ;
@end
