/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TMLValue.h>

@protocol TMLValue <NSObject>
@required
-(id)value;
-(unsigned long long)valueType;

@end


@class NSString;

@interface TMLValue : NSObject <TMLValue> {

	id _value;
	unsigned long long _valueType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)value;
-(unsigned long long)valueType;
-(id)initWithValue:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

