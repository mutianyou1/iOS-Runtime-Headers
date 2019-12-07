/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFRemoteViewControllerProtocol <NSObject>
@required
-(void)willDismissServiceViewController;
-(void)didLoadWebView;
-(void)didFinishInitialLoad:(BOOL)arg1;
-(void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
-(void)executeCustomActivityProxyID:(id)arg1;
-(void)setRemoteSwipeGestureEnabled:(BOOL)arg1;
-(void)willOpenURLInHostApplication:(id)arg1;
-(void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(BOOL)arg2;
-(void)initialLoadDidRedirectToURL:(id)arg1;
-(void)didChangeFullScreen:(BOOL)arg1;
-(void)didResolveRedirectionWithURL:(id)arg1 appLink:(id)arg2;
-(void)didDecideShouldShowLinkPreviews:(BOOL)arg1;

@end
