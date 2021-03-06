/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AKTSDPathCut : NSObject {

	long long mSegment;
	double mT;
	double mSkew;

}

@property (nonatomic,readonly) long long segment; 
@property (nonatomic,readonly) double t; 
@property (nonatomic,readonly) double skew; 
-(id)description;
-(long long)segment;
-(double)t;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 withSkew:(double)arg3 ;
-(double)skew;
@end

