/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSString, NSMutableString;

@interface VPNTableCell : PSTableCell {

	NSString* _alert;
	NSString* _subtitle;
	NSMutableString* _detailText;

}

@property (retain) NSMutableString * detailText;              //@synthesize detailText=_detailText - In the implementation block
@property (retain) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (retain) NSString * alert;                          //@synthesize alert=_alert - In the implementation block
-(NSString *)subtitle;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(NSMutableString *)detailText;
-(void)setDetailText:(NSMutableString *)arg1 ;
-(NSString *)alert;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setAlert:(NSString *)arg1 ;
-(void)updateDetail;
@end

