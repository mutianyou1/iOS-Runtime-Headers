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

@class NSUUID, NSString, NSNumber;

@interface REMChangeTombstone : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _objectIdentifier;
	NSString* _externalIdentifier;
	NSNumber* _daIsEventOnlyContainer;
	NSUUID* _shareeOwningListIdentifier;
	NSString* _shareeDisplayName;
	NSString* _shareeAddress;

}

@property (nonatomic,readonly) NSUUID * objectIdentifier;                        //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * externalIdentifier;                    //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * daIsEventOnlyContainer;                //@synthesize daIsEventOnlyContainer=_daIsEventOnlyContainer - In the implementation block
@property (nonatomic,readonly) NSUUID * shareeOwningListIdentifier;              //@synthesize shareeOwningListIdentifier=_shareeOwningListIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * shareeDisplayName;                     //@synthesize shareeDisplayName=_shareeDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * shareeAddress;                         //@synthesize shareeAddress=_shareeAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)objectIdentifier;
-(NSString *)externalIdentifier;
-(NSNumber *)daIsEventOnlyContainer;
-(NSUUID *)shareeOwningListIdentifier;
-(NSString *)shareeDisplayName;
-(NSString *)shareeAddress;
@end
