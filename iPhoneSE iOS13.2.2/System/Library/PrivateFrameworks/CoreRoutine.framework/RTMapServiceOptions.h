/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTMapServiceOptions : NSObject <NSSecureCoding> {

	BOOL _useBackgroundTraits;

}

@property (nonatomic,readonly) BOOL useBackgroundTraits;              //@synthesize useBackgroundTraits=_useBackgroundTraits - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUseBackgroundTraits:(BOOL)arg1 ;
-(BOOL)useBackgroundTraits;
@end
