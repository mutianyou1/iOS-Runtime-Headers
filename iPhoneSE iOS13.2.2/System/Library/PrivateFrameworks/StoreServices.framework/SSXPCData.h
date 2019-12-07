/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSData.h>

@protocol OS_xpc_object;
@class NSObject;

@interface SSXPCData : NSData {

	NSObject*<OS_xpc_object> _xpcData;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcData;              //@synthesize xpcData=_xpcData - In the implementation block
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)xpcData;
-(id)initWithXPCData:(id)arg1 ;
@end
