/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSBridgedNewsActivityFactoryType
@required
-(id)history;
-(id)notifications;
-(id)saved;
-(id)forYouFeedWithFeedViewContext:(id)arg1 articleViewContext:(id)arg2 analyticsReferral:(id)arg3;
-(id)feedWithTag:(id)arg1 feedViewContext:(id)arg2;
-(void)feedWithTagIdentifier:(id)arg1 feedViewContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)headlineWithHeadlineProviding:(id)arg1 articleContext:(id)arg2 articlePresentationStyle:(long long)arg3 showShareSheet:(BOOL)arg4 forceArticleUpdate:(BOOL)arg5;
-(id)unrealizedHeadlineWithArticleID:(id)arg1 articleContext:(id)arg2 articlePresentationStyle:(long long)arg3 showShareSheet:(BOOL)arg4 forceArticleUpdate:(BOOL)arg5;
-(id)editorialArticleWithIdentifier:(id)arg1 articleViewContext:(id)arg2;
-(id)videoPlayerWithWidgetPlaylist:(id)arg1 analyticsReferral:(id)arg2;
-(id)videoPlayerWithArticleIDs:(id)arg1 analyticsReferral:(id)arg2;
-(id)pickYourFavorites;
-(id)previewWithHeadline:(id)arg1;
-(id)adPreviewWithIdentifier:(id)arg1;
-(id)manageSubscriptions;
-(id)webLinkWithURL:(id)arg1;

@end

