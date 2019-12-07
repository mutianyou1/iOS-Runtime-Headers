/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSWebViewMetadataFetchOperation.h>
#import <libobjc.A.dylib/WBSSVGImageRenderingObserver.h>

@class NSMutableArray, NSTimer, _WKRemoteObjectInterface, WBSSVGImageRenderingRequest, NSString;

@interface WBSSVGImageRenderingFetchOperation : WBSWebViewMetadataFetchOperation <WBSSVGImageRenderingObserver> {

	NSMutableArray* _remainingURLs;
	NSTimer* _loadingTimeoutTimer;
	_WKRemoteObjectInterface* _svgImageRenderingObserverInterface;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) WBSSVGImageRenderingRequest * request; 
@property (nonatomic,copy,readonly) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionHandler;
-(id)initWithRequest:(id)arg1 ;
-(id)webViewConfiguration;
-(void)didCreateWebView;
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_htmlStringWithImageElementString:(id)arg1 ;
-(void)didRenderImage:(id)arg1 ;
-(id)_htmlStringWithSVGContent:(id)arg1 ;
-(void)_loadingTimerDidTimeout:(id)arg1 ;
-(id)_htmlStringWithURL:(id)arg1 ;
-(void)_loadSVGFileURL:(id)arg1 ;
-(void)_renderNextImage;
-(void)_didCompleteWithImage:(id)arg1 ;
-(void)willClearWebView;
-(void)didFailFetch;
-(CGSize)webViewSize;
-(void)startOffscreenFetching;
@end
