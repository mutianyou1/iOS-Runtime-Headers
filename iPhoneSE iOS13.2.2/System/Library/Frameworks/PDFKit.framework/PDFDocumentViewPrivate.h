/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, PDFDocument, PDFRenderingProperties, PDFDocumentContentView, NSMutableDictionary, PDFPageBackgroundManager;

@interface PDFDocumentViewPrivate : NSObject {

	PDFView* pdfView;
	PDFDocument* document;
	PDFRenderingProperties* renderingProperties;
	CGSize documentViewSize;
	PDFDocumentContentView* contentView;
	NSMutableDictionary* pageViews;
	NSMutableDictionary* pageFrames;
	PDFPageBackgroundManager* pageBackgroundManager;
	BOOL ignoreChangedBoundsForBoxNotification;

}
@end
