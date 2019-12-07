/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFSQLExpressionGenerator.h>

@protocol EFSQLExpressable;
@interface EFSQLBitExpressionGenerator : EFSQLExpressionGenerator {

	id<EFSQLExpressable> _bitExpression;

}

@property (nonatomic,readonly) id<EFSQLExpressable> bitExpression;              //@synthesize bitExpression=_bitExpression - In the implementation block
-(id<EFSQLExpressable>)bitExpression;
-(id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 bitExpression:(id)arg4 ;
-(void)bitExpressionWithKeyColumn:(id)arg1 ;
@end
