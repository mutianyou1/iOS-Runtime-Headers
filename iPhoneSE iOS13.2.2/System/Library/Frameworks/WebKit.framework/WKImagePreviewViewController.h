/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@interface WKImagePreviewViewController : UIViewController {

	RetainPtr<NSArray>* _imageActions;
	RetainPtr<_WKActivatedElementInfo>* _activatedElementInfo;
	RetainPtr<CGImage *>* _image;
	RetainPtr<UIImageView>* _imageView;

}
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)previewActionItems;
-(id)initWithCGImage:(RetainPtr<CGImage *>*)arg1 defaultActions:(RetainPtr<NSArray>*)arg2 elementInfo:(RetainPtr<_WKActivatedElementInfo>*)arg3 ;
@end
