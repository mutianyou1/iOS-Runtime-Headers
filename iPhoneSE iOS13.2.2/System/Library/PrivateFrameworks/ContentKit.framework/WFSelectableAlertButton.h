/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFAlertButton.h>

@class NSString, WFImage;

@interface WFSelectableAlertButton : WFAlertButton {

	BOOL _selected;
	BOOL _stickySelection;
	NSString* _subtitle;
	WFImage* _image;

}

@property (nonatomic,copy,readonly) NSString * subtitle;                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) WFImage * image;                       //@synthesize image=_image - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) BOOL stickySelection;                       //@synthesize stickySelection=_stickySelection - In the implementation block
+(id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 selected:(BOOL)arg3 style:(long long)arg4 handler:(/*^block*/id)arg5 ;
+(id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 selected:(BOOL)arg3 stickySelection:(BOOL)arg4 style:(long long)arg5 handler:(/*^block*/id)arg6 image:(id)arg7 ;
-(WFImage *)image;
-(NSString *)subtitle;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)stickySelection;
@end
