/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMFMapViewControllerDelegate <NSObject>
@optional
-(BOOL)canSelectAnnotation:(id)arg1;
-(void)fmfMapViewController:(id)arg1 didSelectHandle:(id)arg2;
-(void)fmfMapViewController:(id)arg1 didDeselectHandle:(id)arg2;
-(void)fmfMapViewController:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
-(void)fmfMapViewController:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
-(void)fmfMapViewController:(id)arg1 didReceiveLocation:(id)arg2;
-(id)titleViewForSelectedHandle;
-(void*)annotationABRecordForHandle:(id)arg1;
-(id)annotationContactForHandle:(id)arg1;

@end

