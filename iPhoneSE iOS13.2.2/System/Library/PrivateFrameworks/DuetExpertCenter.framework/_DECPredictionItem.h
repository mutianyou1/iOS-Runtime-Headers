/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _DECItem;

@interface _DECPredictionItem : NSObject <NSSecureCoding, NSCopying> {

	_DECItem* _item;
	double _confidence;

}

@property (assign,nonatomic) double confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) _DECItem * item;              //@synthesize item=_item - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictionItemWithItem:(id)arg1 confidence:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_DECItem *)item;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(id)initWithItem:(id)arg1 confidence:(double)arg2 ;
@end
