/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <IMSharedUI/IMChatTranscriptItemLayoutAttributes.h>

@interface IMChatTranscriptItemExtendedLayoutAttributes : IMChatTranscriptItemLayoutAttributes {

	long long _layoutOrientation;
	double _topMargin;
	CGSize _drawableSize;

}

@property (assign,nonatomic) long long layoutOrientation;              //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (assign,nonatomic) CGSize drawableSize;                      //@synthesize drawableSize=_drawableSize - In the implementation block
@property (assign,nonatomic) double topMargin;                         //@synthesize topMargin=_topMargin - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(double)topMargin;
-(void)setDrawableSize:(CGSize)arg1 ;
-(CGSize)drawableSize;
@end

