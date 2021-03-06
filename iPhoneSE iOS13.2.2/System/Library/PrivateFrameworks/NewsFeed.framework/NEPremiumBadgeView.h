/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <UIKitCore/UIView.h>

@class NEPremiumBadgeMask, TUShineView;

@interface NEPremiumBadgeView : UIView {

	 premiumBadgeMask;
	 isMotionEnabled;
	 shineView;
	 $__lazy_storage_$_shineMaskLayer;
	??? context;

}

@property (retain,nonatomic) NEPremiumBadgeMask * premiumBadgeMask; 
@property (assign,nonatomic) BOOL isMotionEnabled; 
@property (readonly,nonatomic) TUShineView * shineView; 
-(void)transformWithMotionData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isMotionEnabled;
-(NEPremiumBadgeMask *)premiumBadgeMask;
-(void)setPremiumBadgeMask:(NEPremiumBadgeMask *)arg1 ;
-(void)setIsMotionEnabled:(BOOL)arg1 ;
-(TUShineView *)shineView;
@end

