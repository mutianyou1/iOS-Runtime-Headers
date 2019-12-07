/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class UIColor, NSString;

@interface TVRatingBadgeLayout : TVViewLayout {

	UIColor* _fillColor;
	NSString* _ratingStyle;
	NSString* _ratingStyleAXSmall;
	NSString* _ratingStyleAXLarge;
	double _interitemSpacing;
	double _interitemSpacingAXSmall;
	double _interitemSpacingAXLarge;

}

@property (nonatomic,retain) UIColor * fillColor;                         //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) NSString * ratingStyle;                      //@synthesize ratingStyle=_ratingStyle - In the implementation block
@property (nonatomic,retain) NSString * ratingStyleAXSmall;               //@synthesize ratingStyleAXSmall=_ratingStyleAXSmall - In the implementation block
@property (nonatomic,retain) NSString * ratingStyleAXLarge;               //@synthesize ratingStyleAXLarge=_ratingStyleAXLarge - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                     //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) double interitemSpacingAXSmall;              //@synthesize interitemSpacingAXSmall=_interitemSpacingAXSmall - In the implementation block
@property (assign,nonatomic) double interitemSpacingAXLarge;              //@synthesize interitemSpacingAXLarge=_interitemSpacingAXLarge - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(NSString *)ratingStyle;
-(void)setRatingStyle:(NSString *)arg1 ;
-(void)setRatingStyleAXSmall:(NSString *)arg1 ;
-(void)setRatingStyleAXLarge:(NSString *)arg1 ;
-(void)setInteritemSpacingAXSmall:(double)arg1 ;
-(void)setInteritemSpacingAXLarge:(double)arg1 ;
-(NSString *)ratingStyleAXSmall;
-(NSString *)ratingStyleAXLarge;
-(double)interitemSpacingAXSmall;
-(double)interitemSpacingAXLarge;
@end
