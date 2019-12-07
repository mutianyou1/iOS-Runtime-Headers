/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMHDRStatusIndicator : CAMControlStatusIndicator {

	BOOL _autoHDRAllowed;
	long long _hdrMode;

}

@property (assign,setter=setHDRMode:,nonatomic) long long hdrMode;                     //@synthesize hdrMode=_hdrMode - In the implementation block
@property (assign,getter=isAutoHDRAllowed,nonatomic) BOOL autoHDRAllowed;              //@synthesize autoHDRAllowed=_autoHDRAllowed - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)hdrMode;
-(void)setHDRMode:(long long)arg1 ;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setAllowAutoHDR:(BOOL)arg1 ;
-(void)setAutoHDRAllowed:(BOOL)arg1 ;
-(BOOL)isAutoHDRAllowed;
@end
