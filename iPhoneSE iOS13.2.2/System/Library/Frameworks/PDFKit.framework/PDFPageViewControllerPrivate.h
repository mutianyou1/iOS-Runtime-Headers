/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFRenderingProperties, PDFView, PDFPage, UIScrollView, PDFTextInputView, PDFPageView, UIImage;

@interface PDFPageViewControllerPrivate : NSObject {

	PDFRenderingProperties* renderingProperties;
	PDFView* pdfView;
	UIEdgeInsets pageMargins;
	PDFPage* page;
	UIScrollView* scrollView;
	PDFTextInputView* pageViewContainerView;
	PDFPageView* pageView;
	double minScale;
	double maxScale;
	UIImage* backgroundImage;
	int backgroundQuality;

}
@end
