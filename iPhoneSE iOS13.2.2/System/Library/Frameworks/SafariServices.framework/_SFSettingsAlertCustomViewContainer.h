/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SFSettingsAlertItemView.h>

@class _SFSettingsAlertItemBackgroundView, UIView, _SFSettingsAlertItem, NSString;

@interface _SFSettingsAlertCustomViewContainer : UIView <SFSettingsAlertItemView> {

	_SFSettingsAlertItemBackgroundView* _backgroundView;
	BOOL _hidesSeparator;
	UIView* _contentView;
	_SFSettingsAlertItem* _item;
	long long _defaultBackgroundMode;

}

@property (nonatomic,readonly) UIView * contentView;                          //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) _SFSettingsAlertItem * item;              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL hidesSeparator;                             //@synthesize hidesSeparator=_hidesSeparator - In the implementation block
@property (assign,nonatomic) long long defaultBackgroundMode;                 //@synthesize defaultBackgroundMode=_defaultBackgroundMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long backgroundMode; 
-(_SFSettingsAlertItem *)item;
-(void)setItem:(_SFSettingsAlertItem *)arg1 ;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(BOOL)hidesSeparator;
-(void)setHidesSeparator:(BOOL)arg1 ;
-(long long)backgroundMode;
-(void)setDefaultBackgroundMode:(long long)arg1 ;
-(long long)defaultBackgroundMode;
@end

