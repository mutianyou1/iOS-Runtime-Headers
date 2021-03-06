/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class UIBezierPath, NSArray, NSDictionary;

@interface NTKBezierPathPointModel : NSObject {

	UIBezierPath* _path;
	NSArray* _pathElements;
	NSDictionary* _horizontalPercentageCache;

}

@property (nonatomic,readonly) UIBezierPath * path;              //@synthesize path=_path - In the implementation block
-(UIBezierPath *)path;
-(id)initWithPath:(id)arg1 ;
-(id)_buildHorizontalPercentageCache;
-(CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 withEndPadding:(double)arg2 ;
-(double)_estimatePercentageForEndPadding:(double)arg1 ;
-(CGPoint)_computePointOnPathForHorizontalPercentage:(double)arg1 ;
-(double)_computeDistanceBetweenPointA:(CGPoint)arg1 andPointB:(CGPoint)arg2 ;
-(CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 ;
@end

