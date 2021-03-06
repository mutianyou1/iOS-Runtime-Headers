/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface PUITCCAccessController : PSListController {

	NSString* _serviceKey;
	NSString* _footer;
	NSString* _header;
	NSString* _explanation;

}

@property (nonatomic,copy) NSString * footer;                      //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * header;                      //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * explanation;                 //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,readonly) NSString * serviceKey;              //@synthesize serviceKey=_serviceKey - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(id)init;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(NSString *)header;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)updateSpecifiersForImposedSettings;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(NSString *)serviceKey;
@end

