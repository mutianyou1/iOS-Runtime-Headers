/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMProperty.h>

@class OITSUColor;

@interface CMBordersProperty : CMProperty {

	OITSUColor* mBorderColor;
	OITSUColor* mBorderTopColor;
	OITSUColor* mBorderLeftColor;
	OITSUColor* mBorderBottomColor;
	OITSUColor* mBorderRightColor;
	int mBorderStyle[5];
	int mBorderWidth[5];
	int mCustomWidth;

}
+(BOOL)isStroked:(id)arg1 ;
-(id)init;
-(id)styleString;
-(id)colorString;
-(id)cssStringForName:(id)arg1 ;
-(id)initWithOADStroke:(id)arg1 ;
-(void)adjustValues;
-(id)cssString;
-(id)widthString;
-(id)stringFromStyleEnum:(int)arg1 ;
-(id)stringFromWidthEnum:(int)arg1 ;
-(id)stringFromColor:(id)arg1 ;
-(BOOL)isNoneAtLocation:(int)arg1 ;
-(void)setNoneAtLocation:(int)arg1 ;
-(void)setFromOadStroke:(id)arg1 atLocation:(int)arg2 state:(id)arg3 ;
@end

