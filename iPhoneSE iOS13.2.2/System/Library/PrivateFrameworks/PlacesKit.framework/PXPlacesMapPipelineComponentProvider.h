/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PXPlacesImageCache;


@protocol PXPlacesMapPipelineComponentProvider <NSObject>
@property (readonly) id<PXPlacesMapLayout> layout; 
@property (readonly) id<PXPlacesMapUpdatePlan> updatePlan; 
@property (readonly) id<PXPlacesMapRenderer> renderer; 
@property (readonly) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) PXPlacesImageCache * imageCache; 
@required
-(id<PXPlacesMapLayout>)layout;
-(PXPlacesImageCache *)imageCache;
-(void)setImageCache:(id)arg1;
-(id<PXPlacesMapRenderer>)renderer;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(id<PXPlacesMapUpdatePlan>)updatePlan;

@end
