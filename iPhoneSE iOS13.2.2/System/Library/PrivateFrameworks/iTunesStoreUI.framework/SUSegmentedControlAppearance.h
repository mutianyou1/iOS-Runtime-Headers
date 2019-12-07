/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUControlAppearance, NSMutableDictionary, UIImage;

@interface SUSegmentedControlAppearance : NSObject <NSCopying> {

	SUControlAppearance* _backgroundImages;
	NSMutableDictionary* _dividerImages;
	UIImage* _optionsBackgroundImage;
	NSMutableDictionary* _titleTextAttributes;

}

@property (nonatomic,retain) UIImage * optionsBackgroundImage;              //@synthesize optionsBackgroundImage=_optionsBackgroundImage - In the implementation block
+(id)defaultBarAppearance;
+(id)defaultOptionsAppearanceForTintStyle:(long long)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4 ;
-(void)styleSegmentedControl:(id)arg1 ;
-(void)setOptionsBackgroundImage:(UIImage *)arg1 ;
-(id)_newDividerImageKeyWithLeftState:(unsigned long long)arg1 rightState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(UIImage *)optionsBackgroundImage;
@end
