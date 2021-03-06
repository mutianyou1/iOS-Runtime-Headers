/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

@interface VUIComingSoonCardLayout : TVViewLayout {

	VUITextLayout* _titleLayout;
	VUITextLayout* _textLayout;
	TVCornerRadii _borderRadii;

}

@property (nonatomic,readonly) VUITextLayout * titleLayout;              //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * textLayout;               //@synthesize textLayout=_textLayout - In the implementation block
@property (assign,nonatomic) TVCornerRadii borderRadii;                  //@synthesize borderRadii=_borderRadii - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)textLayout;
-(TVCornerRadii)borderRadii;
-(VUITextLayout *)titleLayout;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
@end

