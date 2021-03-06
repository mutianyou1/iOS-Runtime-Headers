/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STIncludeWebsiteDataGroupSpecifierProvider : STRootGroupSpecifierProvider {

	PSSpecifier* _toggleIncludeWebsiteDataSpecifier;

}

@property (nonatomic,retain) PSSpecifier * toggleIncludeWebsiteDataSpecifier;              //@synthesize toggleIncludeWebsiteDataSpecifier=_toggleIncludeWebsiteDataSpecifier - In the implementation block
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
-(void)setIncludeWebsiteData:(id)arg1 specifier:(id)arg2 ;
-(id)includeWebsiteData:(id)arg1 ;
-(void)setToggleIncludeWebsiteDataSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)toggleIncludeWebsiteDataSpecifier;
@end

