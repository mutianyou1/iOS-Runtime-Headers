/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyValueMutableSet.h>

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {

	NSKeyValueGetter* _valueGetter;
	NSKeyValueSetter* _valueSetter;
	BOOL _treatNilValuesLikeEmptySets;
	char _padding[3];

}
-(unsigned long long)count;
-(id)member:(id)arg1 ;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(void)_raiseNilValueExceptionWithSelector:(SEL)arg1 ;
-(id)_setValueWithSelector:(SEL)arg1 ;
-(id)_createMutableSetValueWithSelector:(SEL)arg1 ;
@end

