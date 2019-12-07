/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/TKPickerItem.h>

@class NSString;

@interface TKPickerSectionItem : TKPickerItem {

	NSString* _text;
	NSString* _footerText;

}

@property (setter=_setText:,nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (setter=_setFooterText:,nonatomic,copy) NSString * footerText;              //@synthesize footerText=_footerText - In the implementation block
-(NSString *)text;
-(void)_setText:(id)arg1 ;
-(NSString *)footerText;
-(void)_setFooterText:(id)arg1 ;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
@end
