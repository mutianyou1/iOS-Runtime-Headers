/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchMeCardResultObject : CATTaskResultObject {

	NSDictionary* _cardInfo;

}

@property (nonatomic,copy) NSDictionary * cardInfo;              //@synthesize cardInfo=_cardInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)cardInfo;
-(void)setCardInfo:(NSDictionary *)arg1 ;
@end

