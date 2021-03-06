/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UILegibilitySettings, SBIconPageIndicatorImageSetResult;

@interface SBIconPageIndicatorImageSetCache : NSObject {

	_UILegibilitySettings* _legibilitySettings;
	SBIconPageIndicatorImageSetResult* _indicatorImageSetResults;
	SBIconPageIndicatorImageSetResult* _searchImageSetResults;
	SBIconPageIndicatorImageSetResult* _cameraImageSetResults;

}

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)pageIndicatorImageSetForLegibilitySettings:(id)arg1 ;
-(id)searchIndicatorImageSetForLegibilitySettings:(id)arg1 ;
-(id)_emptyPageIndicatorSet;
-(id)cameraIndicatorImageSetForLegibilitySettings:(id)arg1 ;
@end

