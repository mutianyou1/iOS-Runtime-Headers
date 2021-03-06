/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface BRCPersistedState : NSObject <NSObject, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _assertionQueue;

}

@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> assertionQueue;              //@synthesize assertionQueue=_assertionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 ;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(void)setAssertionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)assertQueue;
@end

