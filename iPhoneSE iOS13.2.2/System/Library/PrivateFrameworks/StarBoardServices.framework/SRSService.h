/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StarBoardServices.framework/StarBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StarBoardServices/StarBoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/NSLocking.h>

@protocol SRSServiceOwner;
@class NSHashTable, BSServiceConnectionListener, NSString;

@interface SRSService : NSObject <BSServiceConnectionListenerDelegate, NSLocking> {

	NSHashTable* _connections;
	BSServiceConnectionListener* _listener;
	os_unfair_lock_s _lock;
	BOOL _invalidated;
	id<SRSServiceOwner> _owner;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,__weak,readonly) id<SRSServiceOwner> owner;                   //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(Class)_serviceSpecification;
-(id)init;
-(void)invalidate;
-(void)lock;
-(void)unlock;
-(BOOL)isInvalidated;
-(id)initWithOwner:(id)arg1 ;
-(id<SRSServiceOwner>)owner;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)_removeConnection:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(id)initWithOwner:(id)arg1 domain:(id)arg2 ;
-(id)processHandleForCurrentContext;
-(id)_requiredBooleanEntitlements;
-(BOOL)_hasActiveConnections;
-(BOOL)_shouldAcceptConnection:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)_activeConnectionsDidChange;
-(BOOL)hasActiveConnections;
-(void)_enumerateRemoteTargetsUsingBlock:(/*^block*/id)arg1 ;
@end
