/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSXPCStoreServerPerConnectionCache;

@interface NSXPCStoreConnectionInfo : NSObject {

	NSDictionary* _entitlements;
	NSXPCStoreServerPerConnectionCache* _cache;
	SCD_Struct_NS5 _token;
	id _userInfo;
	int _lock;

}
-(void)dealloc;
-(id)description;
-(id)userInfo;
-(SCD_Struct_NS5)auditToken;
-(void)setUserInfo:(id)arg1 ;
-(id)entitlements;
-(id)cache;
-(id)persistentStoreCoordinator;
-(id)initForToken:(SCD_Struct_NS5)arg1 entitlementNames:(id)arg2 cache:(id)arg3 ;
@end

