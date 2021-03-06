/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCCKDatabaseOperationMiddleware.h>

@class NSString;

@interface FCCKDatabaseUserAuthenticationMiddleware : NSObject <FCCKDatabaseOperationMiddleware> {

	BOOL _privateDataSyncingEnabled;

}

@property (assign,getter=isPrivateDataSyncingEnabled,nonatomic) BOOL privateDataSyncingEnabled;              //@synthesize privateDataSyncingEnabled=_privateDataSyncingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)database:(id)arg1 willEnqueueOperation:(id)arg2 ;
-(BOOL)isPrivateDataSyncingEnabled;
-(id)initWithPrivateDataSyncingEnabled:(BOOL)arg1 ;
-(void)setPrivateDataSyncingEnabled:(BOOL)arg1 ;
@end

