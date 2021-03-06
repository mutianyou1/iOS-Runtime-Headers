/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMContactRepresentation : NSObject <NSSecureCoding> {

	NSArray* _phones;
	NSArray* _emails;

}

@property (nonatomic,copy) NSArray * phones;              //@synthesize phones=_phones - In the implementation block
@property (nonatomic,copy) NSArray * emails;              //@synthesize emails=_emails - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)representationFromData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)phones;
-(void)setPhones:(NSArray *)arg1 ;
-(void)setEmails:(NSArray *)arg1 ;
-(NSArray *)emails;
-(id)archivedData;
-(id)initWithPhones:(id)arg1 emails:(id)arg2 ;
-(BOOL)matchesContactRepresentation:(id)arg1 ;
@end

