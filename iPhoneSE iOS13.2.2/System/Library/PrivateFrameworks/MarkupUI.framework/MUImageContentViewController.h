/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MarkupUI/MarkupUI-Structs.h>
#import <MarkupUI/MUContentViewController.h>
#import <libobjc.A.dylib/AKControllerDelegateProtocol.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MUContentViewControllerProtocol.h>

@class UIScrollView, NSArray, UIImage, UIView, UIImageView, UITapGestureRecognizer, AKRectAnnotation, AKPageController, NSString;

@interface MUImageContentViewController : MUContentViewController <AKControllerDelegateProtocol, UIScrollViewDelegate, MUContentViewControllerProtocol> {

	CGPoint _pointToCenterAfterRotation;
	BOOL _wasZoomToFit;
	BOOL _centersIgnoringContentInsets;
	BOOL _usePlaceholderAsDisplayImageIfPossible;
	BOOL _inDoubleTapZoom;
	BOOL _didSetup;
	BOOL _firstLoadZoomToFit;
	BOOL _zoomToFitRestoreValue;
	UIImage* _tentativePlaceholderImage;
	double _maxImageDimension;
	unsigned long long _inkStyle;
	id _sourceContent;
	UIScrollView* _scrollView;
	UIView* _combinedContentView;
	UIImageView* _imageView;
	double _downsampledImageScale;
	/*^block*/id _loadCompletionBlock;
	UITapGestureRecognizer* _localDoubleTapRecognizer;
	AKRectAnnotation* _editingAnnotaiton;
	AKPageController* _pageController;
	CGSize _sourceImagePixelSize;
	UIEdgeInsets _edgeInsets;

}

@property (retain) id sourceContent;                                                   //@synthesize sourceContent=_sourceContent - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * combinedContentView;                             //@synthesize combinedContentView=_combinedContentView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (assign) CGSize sourceImagePixelSize;                                        //@synthesize sourceImagePixelSize=_sourceImagePixelSize - In the implementation block
@property (assign) double downsampledImageScale;                                       //@synthesize downsampledImageScale=_downsampledImageScale - In the implementation block
@property (assign,nonatomic) BOOL usePlaceholderAsDisplayImageIfPossible;              //@synthesize usePlaceholderAsDisplayImageIfPossible=_usePlaceholderAsDisplayImageIfPossible - In the implementation block
@property (assign,nonatomic) BOOL inDoubleTapZoom;                                     //@synthesize inDoubleTapZoom=_inDoubleTapZoom - In the implementation block
@property (copy) id loadCompletionBlock;                                               //@synthesize loadCompletionBlock=_loadCompletionBlock - In the implementation block
@property (retain) UITapGestureRecognizer * localDoubleTapRecognizer;                  //@synthesize localDoubleTapRecognizer=_localDoubleTapRecognizer - In the implementation block
@property (assign) BOOL didSetup;                                                      //@synthesize didSetup=_didSetup - In the implementation block
@property (assign,nonatomic,__weak) AKRectAnnotation * editingAnnotaiton;              //@synthesize editingAnnotaiton=_editingAnnotaiton - In the implementation block
@property (assign,nonatomic,__weak) AKPageController * pageController;                 //@synthesize pageController=_pageController - In the implementation block
@property (assign,nonatomic) BOOL firstLoadZoomToFit;                                  //@synthesize firstLoadZoomToFit=_firstLoadZoomToFit - In the implementation block
@property (assign,nonatomic) BOOL zoomToFitRestoreValue;                               //@synthesize zoomToFitRestoreValue=_zoomToFitRestoreValue - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                  //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) BOOL centersIgnoringContentInsets;                        //@synthesize centersIgnoringContentInsets=_centersIgnoringContentInsets - In the implementation block
@property (nonatomic,retain) UIImage * tentativePlaceholderImage;                      //@synthesize tentativePlaceholderImage=_tentativePlaceholderImage - In the implementation block
@property (assign) double maxImageDimension;                                           //@synthesize maxImageDimension=_maxImageDimension - In the implementation block
@property (assign,nonatomic) unsigned long long inkStyle;                              //@synthesize inkStyle=_inkStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long defaultToolTag; 
@property (nonatomic,readonly) UIScrollView * contentViewScrollView; 
@property (retain) NSArray * sourceContentReplacedAnnotationMaps; 
@property (assign,nonatomic) BOOL showsThumbnailView; 
@property (readonly) unsigned long long pageCount; 
@property (assign,nonatomic) BOOL navigationModeHorizontal; 
-(void)dealloc;
-(CGSize)contentSize;
-(void)teardown;
-(UIImageView *)imageView;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(CGPoint)_minimumContentOffset;
-(CGPoint)_maximumContentOffset;
-(UIScrollView *)scrollView;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)didReceiveMemoryWarning;
-(void)setImageView:(UIImageView *)arg1 ;
-(CGRect)visibleContentRect;
-(void)setup;
-(AKRectAnnotation *)editingAnnotaiton;
-(id)undoManagerForAnnotationController:(id)arg1 ;
-(id)popoverPresentingViewControllerForAnnotationController:(id)arg1 ;
-(double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2 ;
-(void)editCheckpointReachedForAnnotationController:(id)arg1 ;
-(void)editDetectedForAnnotationController:(id)arg1 ;
-(void)penStrokeCompletedForAnnotationController:(id)arg1 ;
-(void)controllerWillShowSignatureCaptureView:(id)arg1 ;
-(void)controllerWillDismissSignatureCaptureView:(id)arg1 ;
-(void)controllerWillShowSignatureManagerView:(id)arg1 ;
-(void)controllerWillDismissSignatureManagerView:(id)arg1 ;
-(void)controllerDidEnterToolMode:(id)arg1 ;
-(void)controllerDidExitToolMode:(id)arg1 ;
-(void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2 ;
-(id)controller:(id)arg1 willSetToolbarItems:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3 ;
-(CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2 ;
-(id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5 ;
-(void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3 ;
-(void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3 ;
-(void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(BOOL)arg3 forAnnotationController:(id)arg4 ;
-(BOOL)controllerShouldDetectFormElements:(id)arg1 ;
-(BOOL)shouldPlaceFormElementAtPoint:(CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3 ;
-(BOOL)shouldPlaceProposedFormElementAtRect:(CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3 ;
-(id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2 ;
-(void)_doubleTap:(id)arg1 ;
-(void)setCentersIgnoringContentInsets:(BOOL)arg1 ;
-(void)setInkStyle:(unsigned long long)arg1 ;
-(unsigned long long)inkStyle;
-(void)uninstallAllAnnotationControllerOverlays;
-(void)setSourceContent:(id)arg1 ;
-(id)sourceContent;
-(void)loadContentWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setTentativePlaceholderImage:(UIImage *)arg1 ;
-(long long)defaultToolTag;
-(UIScrollView *)contentViewScrollView;
-(CGSize)idealContentSizeForScreenSize:(CGSize)arg1 windowDecorationSize:(CGSize)arg2 ;
-(CGRect)visibleContentRectInCoordinateSpace:(id)arg1 ;
-(id)initWithSourceContent:(id)arg1 archivedDataModel:(id)arg2 delegate:(id)arg3 ;
-(BOOL)centersIgnoringContentInsets;
-(void)setMaxImageDimension:(double)arg1 ;
-(void)setCombinedContentView:(UIView *)arg1 ;
-(UIView *)combinedContentView;
-(void)_annotationWillBeginEditing:(id)arg1 ;
-(void)_annotationDidEndEditing:(id)arg1 ;
-(void)setFirstLoadZoomToFit:(BOOL)arg1 ;
-(void)setZoomToFitRestoreValue:(BOOL)arg1 ;
-(void)setDidSetup:(BOOL)arg1 ;
-(void)setLocalDoubleTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)didSetup;
-(UITapGestureRecognizer *)localDoubleTapRecognizer;
-(void)_setImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(CGSize)sourceImagePixelSize;
-(void)_updateMinMaxZoomFactor;
-(void)_uninstallOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2 ;
-(void)setSourceImagePixelSize:(CGSize)arg1 ;
-(void)_installOverlayOfController:(id)arg1 forPageAtIndex:(unsigned long long)arg2 ;
-(void)setLoadCompletionBlock:(id)arg1 ;
-(id)loadCompletionBlock;
-(void)_downsampleImageForDisplay:(CGImageRef)arg1 fromImageSource:(CGImageSourceRef)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)_imageIsSmallerThanView;
-(double)_zoomToFitZoomFactor;
-(BOOL)firstLoadZoomToFit;
-(BOOL)_placeholderCanBeUsedForBaseImageOfSize:(CGSize)arg1 ;
-(UIImage *)tentativePlaceholderImage;
-(double)maxImageDimension;
-(void)setDownsampledImageScale:(double)arg1 ;
-(void)_setupScrollViewForImageOfScaledSize:(CGSize)arg1 ;
-(double)_zoomToFitZoomFactorIncludingScrollViewEdgeInsets;
-(double)_zoomToFitZoomFactorInBounds:(CGRect)arg1 ;
-(CGRect)_zoomRectForScale:(double)arg1 withCenter:(CGPoint)arg2 ;
-(BOOL)_imageIsSize:(CGSize)arg1 isSmallerThanSize:(CGSize)arg2 ;
-(void)_prepareToRotate;
-(void)_recoverFromRotation;
-(void)setEditingAnnotaiton:(AKRectAnnotation *)arg1 ;
-(void)_adjustScrollViewForKeyboardNotification:(id)arg1 ;
-(BOOL)zoomToFitRestoreValue;
-(unsigned long long)_pageIndexForAnnotation:(id)arg1 ;
-(CGRect)_annotationRectInOverlay:(id)arg1 pageIndex:(unsigned long long)arg2 ;
-(void)adjustScrollViewToAccomodateKeyboardStartingFrame:(CGRect)arg1 endingFrame:(CGRect)arg2 annotationFrame:(CGRect)arg3 inOverlayView:(id)arg4 withAnimationDuration:(double)arg5 curve:(long long)arg6 ;
-(double)downsampledImageScale;
-(id)contentSnapshot;
-(BOOL)usePlaceholderAsDisplayImageIfPossible;
-(void)setUsePlaceholderAsDisplayImageIfPossible:(BOOL)arg1 ;
-(BOOL)inDoubleTapZoom;
-(void)setInDoubleTapZoom:(BOOL)arg1 ;
@end
