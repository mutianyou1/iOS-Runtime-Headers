/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFLoadBlockedContentBannerViewDelegate;
@interface MFLoadBlockedContentBannerView : MFSuggestionBannerView {

	long long _blockingReason;
	id<MFLoadBlockedContentBannerViewDelegate> _delegate;
	unsigned long long _blockedContentTypes;

}

@property (assign,nonatomic,__weak) id<MFLoadBlockedContentBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long blockedContentTypes;                                  //@synthesize blockedContentTypes=_blockedContentTypes - In the implementation block
-(id<MFLoadBlockedContentBannerViewDelegate>)delegate;
-(void)setDelegate:(id<MFLoadBlockedContentBannerViewDelegate>)arg1 ;
-(void)_titleControlTapped:(id)arg1 ;
-(void)_updateBannerText;
-(id)initWithFrame:(CGRect)arg1 blockedContentTypes:(unsigned long long)arg2 blockingReason:(long long)arg3 ;
-(void)setBlockedContentTypes:(unsigned long long)arg1 ;
-(unsigned long long)blockedContentTypes;
@end

