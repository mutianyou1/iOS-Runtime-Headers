/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class NSString;

@interface PDAnimateTimeBehavior : PDAnimateBehavior {

	NSString* mTo;
	NSString* mFrom;
	NSString* mBy;
	BOOL mHasCalcMode;
	int mCalcMode;
	BOOL mHasValueType;
	int mValueType;

}
-(id)init;
-(id)to;
-(id)from;
-(int)valueType;
-(void)setFrom:(id)arg1 ;
-(void)setTo:(id)arg1 ;
-(void)setValueType:(int)arg1 ;
-(BOOL)hasValueType;
-(id)by;
-(void)setBy:(id)arg1 ;
-(BOOL)hasCalcMode;
-(int)calcMode;
-(void)setCalcMode:(int)arg1 ;
@end
