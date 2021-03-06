/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PVPersonDeduperProfile : NSObject <NSCopying> {

	BOOL _shouldRelaxThreshold;
	double _strictMaximumDistance;
	double _normalMaximumDistance;
	double _fuzzyMaximumDistance;

}

@property (assign,nonatomic) double strictMaximumDistance;              //@synthesize strictMaximumDistance=_strictMaximumDistance - In the implementation block
@property (assign,nonatomic) double normalMaximumDistance;              //@synthesize normalMaximumDistance=_normalMaximumDistance - In the implementation block
@property (assign,nonatomic) double fuzzyMaximumDistance;               //@synthesize fuzzyMaximumDistance=_fuzzyMaximumDistance - In the implementation block
@property (assign,nonatomic) BOOL shouldRelaxThreshold;                 //@synthesize shouldRelaxThreshold=_shouldRelaxThreshold - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)strictMaximumDistance;
-(void)setStrictMaximumDistance:(double)arg1 ;
-(double)normalMaximumDistance;
-(void)setNormalMaximumDistance:(double)arg1 ;
-(double)fuzzyMaximumDistance;
-(void)setFuzzyMaximumDistance:(double)arg1 ;
-(BOOL)shouldRelaxThreshold;
-(void)setShouldRelaxThreshold:(BOOL)arg1 ;
@end

