/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSUUID;

@interface HMAccessorySettingConstraint : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	long long _type;
	id<NSCopying><NSSecureCoding> _value;

}

@property (readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long type;                                        //@synthesize type=_type - In the implementation block
@property (copy,readonly) id<NSCopying><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)supportedValueClasses;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id<NSCopying><NSSecureCoding>)value;
-(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
@end

