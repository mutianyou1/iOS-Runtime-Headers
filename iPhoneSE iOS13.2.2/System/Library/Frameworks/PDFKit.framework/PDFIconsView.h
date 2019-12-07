/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PDFThumbnailView, NSMutableArray, PDFPageIconLayer;

@interface PDFIconsView : UIView {

	PDFThumbnailView* _thumbnailView;
	NSMutableArray* _icons;
	PDFPageIconLayer* _activeIcon;

}
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)currentPage;
-(void)updateIconsImages;
-(void)_updateScrubberForPageIndex:(int)arg1 ;
-(int)_iconsLayoutIconCount;
-(CGSize)_iconsLayoutSize;
-(void)_updateScrubberAtViewLocation:(CGPoint)arg1 ;
-(id)initFromThumbnailView:(id)arg1 ;
-(void)documentChanged:(id)arg1 ;
-(void)documentMutated:(id)arg1 ;
-(void)currentPageChanged:(id)arg1 ;
-(void)pageChanged:(id)arg1 ;
@end
