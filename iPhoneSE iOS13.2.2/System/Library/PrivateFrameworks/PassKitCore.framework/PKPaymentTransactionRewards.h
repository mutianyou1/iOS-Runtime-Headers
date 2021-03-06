/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PKPaymentTransactionRewards : NSObject <NSSecureCoding, PKCloudStoreCoding, NSCopying> {

	NSArray* _rewardsItems;

}

@property (nonatomic,retain) NSArray * rewardsItems;              //@synthesize rewardsItems=_rewardsItems - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_rewardsItemsSetFromJsonString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)itemType;
-(id)jsonString;
-(id)jsonArrayRepresentation;
-(id)initWithRewardsItems:(id)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(BOOL)isEqualToRewards:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNames;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(id)initWithJsonString:(id)arg1 ;
-(NSArray *)rewardsItems;
-(void)setRewardsItems:(NSArray *)arg1 ;
@end

