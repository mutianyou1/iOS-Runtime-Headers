/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@class NSArray;

@interface PIVideoReframeAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSArray * keyframes; 
@property (assign,nonatomic) SCD_Struct_PI6 stabCropRect; 
+(id)stabCropRectKey;
+(id)keyframesKey;
-(BOOL)isEqual:(id)arg1 forKeys:(id)arg2 ;
-(NSArray *)keyframes;
-(void)setKeyframes:(NSArray *)arg1 ;
-(SCD_Struct_PI6)stabCropRect;
-(void)setStabCropRect:(SCD_Struct_PI6)arg1 ;
@end
