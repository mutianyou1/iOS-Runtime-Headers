/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKShareSheetDelegate;
#import <WebKit/WebKit-Structs.h>
@interface WKShareSheet : NSObject {

	WeakObjCPtr<WKWebView> _webView;
	CompletionHandler<void (bool)>* _completionHandler;
	RetainPtr<UIActivityViewController>* _shareSheetViewController;
	RetainPtr<UIViewController>* _presentationViewController;
	id<WKShareSheetDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WKShareSheetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WKShareSheetDelegate>)delegate;
-(void)setDelegate:(id<WKShareSheetDelegate>)arg1 ;
-(void)dismiss;
-(id)initWithView:(id)arg1 ;
-(void)presentWithParameters:(const ShareDataWithParsedURL*)arg1 inRect:(Optional<WebCore::FloatRect>)arg2 completionHandler:(CompletionHandler<void (bool)>*)arg3 ;
-(void)_didCompleteWithSuccess:(BOOL)arg1 ;
-(void)dispatchDidDismiss;
@end

