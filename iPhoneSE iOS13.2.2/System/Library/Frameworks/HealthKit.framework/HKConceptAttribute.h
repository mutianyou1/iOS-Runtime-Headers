/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSString, HKConcept;

@interface HKConceptAttribute : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	long long _identifier;
	HKConcept* _concept;
	long long _valueType;
	id<NSCopying><NSSecureCoding> _value;

}

@property (nonatomic,readonly) long long identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) HKConcept * concept;                            //@synthesize concept=_concept - In the implementation block
@property (nonatomic,readonly) long long valueType;                                   //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy,readonly) id<NSCopying><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_attributeWithIdentifier:(long long)arg1 name:(id)arg2 valueType:(long long)arg3 value:(id)arg4 ;
+(id)_attributeWithName:(id)arg1 valueType:(long long)arg2 ;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(long long)identifier;
-(id<NSCopying><NSSecureCoding>)value;
-(long long)valueType;
-(id)_attributeBySettingConcept:(id)arg1 ;
-(HKConcept *)concept;
-(id)_initWithIdentifier:(long long)arg1 name:(id)arg2 valueType:(long long)arg3 value:(id)arg4 ;
@end

