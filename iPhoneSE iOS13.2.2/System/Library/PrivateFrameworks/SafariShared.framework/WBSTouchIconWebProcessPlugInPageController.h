/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSWebProcessPlugInPageController.h>

@protocol WBSTouchIconObserver;
@interface WBSTouchIconWebProcessPlugInPageController : WBSWebProcessPlugInPageController {

	id<WBSTouchIconObserver> _touchIconObserver;
	unsigned long long _mainFrameMainResourceId;
	BOOL _didRecieveDidHandleOnloadEventsForFrameCallback;
	BOOL _shouldExtractIconsWhenRecievingDidHandleOnloadEventsForFrameCallback;

}

@property (nonatomic,readonly) id<WBSTouchIconObserver> touchIconObserver; 
-(void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2 ;
-(id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5 ;
-(void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(id)arg4 pageIsProvisionallyLoading:(BOOL)arg5 ;
-(id)_extractTouchIconURLsIncludingDefaultURLs:(BOOL)arg1 didExtractNonDefaultIconURLs:(BOOL*)arg2 ;
-(id)_extractFaviconURLsIncludingDefaultURLs:(BOOL)arg1 didExtractNonDefaultIconURLs:(BOOL*)arg2 ;
-(id<WBSTouchIconObserver>)touchIconObserver;
@end

