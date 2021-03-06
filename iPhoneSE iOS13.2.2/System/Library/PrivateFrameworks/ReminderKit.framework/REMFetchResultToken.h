/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding> {

	NSDictionary* _persistentHistoryTokens;

}

@property (nonatomic,readonly) NSDictionary * persistentHistoryTokens;              //@synthesize persistentHistoryTokens=_persistentHistoryTokens - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPersistentHistoryTokens:(id)arg1 ;
-(NSDictionary *)persistentHistoryTokens;
@end

