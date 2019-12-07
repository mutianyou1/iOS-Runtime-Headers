/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKTSDBrushStroke.h>

@class UIColor, NSString;

@interface AKTSDMutableBrushStroke : AKTSDBrushStroke {

	int join;
	UIColor* color;
	double width;
	double miterLimit;
	NSString* strokeName;

}

@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) NSString * strokeName; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(UIColor *)color;
-(void)setWidth:(double)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(NSString *)strokeName;
-(int)join;
-(void)setJoin:(int)arg1 ;
-(void)setStrokeName:(NSString *)arg1 ;
@end
