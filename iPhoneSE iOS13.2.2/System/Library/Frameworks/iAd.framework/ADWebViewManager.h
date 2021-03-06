/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ADWebView;

@interface ADWebViewManager : NSObject {

	ADWebView* _preallocatedWebView;

}

@property (nonatomic,retain) ADWebView * preallocatedWebView;              //@synthesize preallocatedWebView=_preallocatedWebView - In the implementation block
+(id)sharedManager;
-(void)preallocateWebViewWithBackgroundPriority;
-(id)creativeView;
-(ADWebView *)preallocatedWebView;
-(void)setPreallocatedWebView:(ADWebView *)arg1 ;
-(id)_webViewForCreative;
-(id)_webViewForCreativeForVideo;
-(id)creativeViewForVideo;
@end

