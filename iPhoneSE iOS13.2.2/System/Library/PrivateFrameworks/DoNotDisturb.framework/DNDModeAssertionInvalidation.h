/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DNDModeAssertion, NSDate, DNDModeAssertionInvalidationDetails, DNDModeAssertionSource;

@interface DNDModeAssertionInvalidation : NSObject <NSCopying, NSSecureCoding> {

	DNDModeAssertion* _assertion;
	NSDate* _invalidationDate;
	DNDModeAssertionInvalidationDetails* _details;
	DNDModeAssertionSource* _source;
	unsigned long long _reason;
	unsigned long long _reasonOverride;

}

@property (nonatomic,copy,readonly) DNDModeAssertionSource * source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionInvalidationDetails * details;              //@synthesize details=_details - In the implementation block
@property (nonatomic,readonly) unsigned long long reasonOverride;                               //@synthesize reasonOverride=_reasonOverride - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertion * assertion;                               //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy,readonly) NSDate * invalidationDate;                                  //@synthesize invalidationDate=_invalidationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long reason;                                       //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(DNDModeAssertionSource *)source;
-(DNDModeAssertion *)assertion;
-(DNDModeAssertionInvalidationDetails *)details;
-(NSDate *)invalidationDate;
-(unsigned long long)reasonOverride;
-(id)initWithAssertion:(id)arg1 invalidationDate:(id)arg2 details:(id)arg3 source:(id)arg4 reason:(unsigned long long)arg5 reasonOverride:(unsigned long long)arg6 ;
@end

