/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString, NSError;

@interface HMDDatabaseCKOperationCompletionEvent : HMDLogEvent <HMDAWDLogEvent> {

	NSString* _containerIdentifier;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (copy,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
+(id)uuid;
-(NSError *)error;
-(NSString *)containerIdentifier;
-(id)initWithContainerIdentifier:(id)arg1 error:(id)arg2 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

