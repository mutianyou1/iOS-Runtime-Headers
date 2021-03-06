/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSString* _name;

}

@property (copy) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)invalidate;
-(void)lock;
-(void)unlock;
-(void)setName:(NSString *)arg1 ;
@end

