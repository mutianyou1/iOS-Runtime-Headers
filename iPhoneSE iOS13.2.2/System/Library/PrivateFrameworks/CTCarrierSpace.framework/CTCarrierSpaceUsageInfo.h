/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTCarrierSpaceUsageInfo : NSObject <NSSecureCoding> {

	NSArray* _accountMetrics;
	NSString* _moreDetailsURL;

}

@property (nonatomic,retain) NSArray * accountMetrics;               //@synthesize accountMetrics=_accountMetrics - In the implementation block
@property (nonatomic,retain) NSString * moreDetailsURL;              //@synthesize moreDetailsURL=_moreDetailsURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)accountMetrics;
-(void)setAccountMetrics:(NSArray *)arg1 ;
-(NSString *)moreDetailsURL;
-(void)setMoreDetailsURL:(NSString *)arg1 ;
@end

