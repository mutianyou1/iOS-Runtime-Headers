/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>

@protocol HFColorProfile;
@interface HUQuickControlColorViewProfile : HUQuickControlViewProfile {

	BOOL _supportsRGBColor;
	id<HFColorProfile> _colorProfile;
	unsigned long long _mode;

}

@property (assign,nonatomic) BOOL supportsRGBColor;                        //@synthesize supportsRGBColor=_supportsRGBColor - In the implementation block
@property (nonatomic,retain) id<HFColorProfile> colorProfile;              //@synthesize colorProfile=_colorProfile - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                      //@synthesize mode=_mode - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id<HFColorProfile>)colorProfile;
-(void)setColorProfile:(id<HFColorProfile>)arg1 ;
-(BOOL)supportsRGBColor;
-(void)setSupportsRGBColor:(BOOL)arg1 ;
@end
