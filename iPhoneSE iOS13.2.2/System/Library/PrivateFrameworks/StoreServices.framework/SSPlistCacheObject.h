/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSCacheObject.h>

@class NSDictionary, NSString;

@interface SSPlistCacheObject : NSObject <SSCacheObject> {

	NSDictionary* _plist;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheObjectTypeIdentifier;
-(void)dealloc;
-(void)setPlist:(id)arg1 ;
-(id)plist;
-(id)cacheObjectDataRepresentation;
-(id)cacheObjectTypeIdentifier;
-(id)initWithCacheObjectDataRepresentation:(id)arg1 ;
@end

