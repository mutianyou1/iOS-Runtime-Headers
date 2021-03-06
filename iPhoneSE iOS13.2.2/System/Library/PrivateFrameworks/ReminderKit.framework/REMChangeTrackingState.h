/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMChangeToken, NSDate;

@interface REMChangeTrackingState : NSObject <NSCopying, NSSecureCoding> {

	REMChangeToken* _lastConsumedChangeToken;
	NSDate* _lastConsumedDate;

}

@property (nonatomic,retain) NSDate * lastConsumedDate;                             //@synthesize lastConsumedDate=_lastConsumedDate - In the implementation block
@property (nonatomic,retain) REMChangeToken * lastConsumedChangeToken;              //@synthesize lastConsumedChangeToken=_lastConsumedChangeToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(REMChangeToken *)lastConsumedChangeToken;
-(NSDate *)lastConsumedDate;
-(void)setLastConsumedChangeToken:(REMChangeToken *)arg1 ;
-(void)setLastConsumedDate:(NSDate *)arg1 ;
@end

