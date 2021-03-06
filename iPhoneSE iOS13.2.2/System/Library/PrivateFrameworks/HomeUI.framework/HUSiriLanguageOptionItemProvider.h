/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class NSSet, HFAccessorySettingSiriLanguageAdapter;

@interface HUSiriLanguageOptionItemProvider : HFItemProvider {

	NSSet* _items;
	unsigned long long _optionStyle;
	HFAccessorySettingSiriLanguageAdapter* _adapter;

}

@property (nonatomic,retain) NSSet * items;                                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long optionStyle;                               //@synthesize optionStyle=_optionStyle - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingSiriLanguageAdapter * adapter;              //@synthesize adapter=_adapter - In the implementation block
-(NSSet *)items;
-(void)setItems:(NSSet *)arg1 ;
-(HFAccessorySettingSiriLanguageAdapter *)adapter;
-(id)reloadItems;
-(id)initWithAdapter:(id)arg1 optionStyle:(unsigned long long)arg2 ;
-(unsigned long long)optionStyle;
@end

