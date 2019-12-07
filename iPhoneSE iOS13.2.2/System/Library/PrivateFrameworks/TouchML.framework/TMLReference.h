/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TMLValue.h>

@class NSString;

@interface TMLReference : NSObject <TMLValue> {

	id _target;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)referenceForTarget:(id)arg1 ;
+(id)referenceWithBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)value;
-(unsigned long long)valueType;
-(id)initWithTarget:(id)arg1 block:(/*^block*/id)arg2 ;
@end
