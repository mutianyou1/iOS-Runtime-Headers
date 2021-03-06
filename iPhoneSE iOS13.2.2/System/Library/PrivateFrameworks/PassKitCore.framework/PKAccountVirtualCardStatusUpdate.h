/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSArray, NSString;

@interface PKAccountVirtualCardStatusUpdate : NSObject <NSSecureCoding, PKRecordObject> {

	unsigned long long _reason;
	NSArray* _updatedVirtualCards;

}

@property (assign,nonatomic) unsigned long long reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * updatedVirtualCards;              //@synthesize updatedVirtualCards=_updatedVirtualCards - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)reason;
-(void)setReason:(unsigned long long)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSArray *)updatedVirtualCards;
-(void)setUpdatedVirtualCards:(NSArray *)arg1 ;
@end

