/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMFetchResultToken, NSString;

@interface REMStoreSwiftInvocation : NSObject <NSSecureCoding> {

	REMFetchResultToken* _fetchResultTokenToDiffAgainst;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) REMFetchResultToken * fetchResultTokenToDiffAgainst;              //@synthesize fetchResultTokenToDiffAgainst=_fetchResultTokenToDiffAgainst - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFetchResultTokenToDiffAgainst:(id)arg1 ;
-(REMFetchResultToken *)fetchResultTokenToDiffAgainst;
@end

