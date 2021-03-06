/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUProgress.h>

@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress {

	TSUBasicProgressStorage* mStorage;

}

@property (assign) double value; 
@property (getter=isIndeterminate) BOOL indeterminate; 
-(id)init;
-(void)dealloc;
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(double)maxValue;
-(id)initWithMaxValue:(double)arg1 ;
@end

