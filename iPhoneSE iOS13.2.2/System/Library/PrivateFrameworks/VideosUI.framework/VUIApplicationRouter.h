/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIApplicationRouter : NSObject
+(void)dismissPresentedViewController;
+(id)currentNavigationController;
+(BOOL)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id*)arg4 ;
+(BOOL)handleAccountSettingsEvent:(id)arg1 urlString:(id)arg2 amsBagKey:(id)arg3 ;
+(id)topPresentedViewController;
+(id)topMostVisibleViewController;
+(id)eventDataSourceForEvent:(id)arg1 viewElement:(id)arg2 ;
+(void)_performForType:(long long)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 eventDataSource:(id)arg4 ;
+(BOOL)_handleDocumentDataSource:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)_handleAccountSettingsPresentationWithViewController:(id)arg1 ;
+(void)_amsBagURLForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)_dismissPresentedViewControllerWithCompletion:(/*^block*/id)arg1 ;
+(id)_viewControllerWithIdentifier:(id)arg1 ;
+(void)dismissOrPopViewControllerWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)dismissOrPopLastViewControllerWithCompletion:(/*^block*/id)arg1 ;
@end

