/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>

@class CNPostalAddress;

@interface CNPostalAddressContactPredicate : CNPredicate {

	CNPostalAddress* _postalAddress;

}

@property (nonatomic,copy,readonly) CNPostalAddress * postalAddress;              //@synthesize postalAddress=_postalAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNPostalAddress *)postalAddress;
-(id)initWithPostalAddress:(id)arg1 ;
@end
