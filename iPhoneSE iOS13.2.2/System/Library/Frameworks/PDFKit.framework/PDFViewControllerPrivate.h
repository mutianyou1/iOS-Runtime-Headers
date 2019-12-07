/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, CALayer, PDFAnnotation, NSMutableArray, UIMenuItem, PDFMarkupMenuView;

@interface PDFViewControllerPrivate : NSObject {

	PDFView* view;
	CGRect viewMarquee;
	CALayer* marqueeEffect;
	PDFAnnotation* activeAnnotation;
	unsigned long long textSelectionMenu;
	NSMutableArray* textSelectionMenuItems;
	UIMenuItem* highlightItem;
	UIMenuItem* showMarkupMenuItem;
	PDFMarkupMenuView* markupMenuView;
	double longPressGestureStartTime;
	BOOL didPostPDFExtensionViewAnnotationLongPress;

}
@end
