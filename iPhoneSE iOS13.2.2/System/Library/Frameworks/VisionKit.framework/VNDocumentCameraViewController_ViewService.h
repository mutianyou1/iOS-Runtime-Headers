/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VisionKit/VisionKit-Structs.h>
#import <VisionKit/VNDocumentCameraViewController.h>
#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>
#import <libobjc.A.dylib/DCDocumentCameraPublicViewController.h>

@class DCDocumentCameraViewServiceSession, BKSAccelerometer, DCDocumentCameraRemoteViewController, NSString;

@interface VNDocumentCameraViewController_ViewService : VNDocumentCameraViewController <BKSAccelerometerDelegate, DCDocumentCameraPublicViewController> {

	DCDocumentCameraViewServiceSession* _viewServiceSession;
	BKSAccelerometer* _accelerometer;

}

@property (getter=viewServiceViewController,nonatomic,readonly) id<DCDocumentCameraViewServiceViewController> viewServiceViewController; 
@property (getter=remoteViewController,nonatomic,readonly) DCDocumentCameraRemoteViewController * remoteViewController; 
@property (nonatomic,retain) DCDocumentCameraViewServiceSession * viewServiceSession;                                                                 //@synthesize viewServiceSession=_viewServiceSession - In the implementation block
@property (nonatomic,retain) BKSAccelerometer * accelerometer;                                                                                        //@synthesize accelerometer=_accelerometer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)dismiss;
-(void)viewDidLoad;
-(DCDocumentCameraRemoteViewController *)remoteViewController;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2 ;
-(void)didCancel:(id)arg1 ;
-(BKSAccelerometer *)accelerometer;
-(void)setAccelerometer:(BKSAccelerometer *)arg1 ;
-(id<DCDocumentCameraViewServiceViewController>)viewServiceViewController;
-(void)setViewServiceSession:(DCDocumentCameraViewServiceSession *)arg1 ;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1 ;
-(void)didFinishWithDocumentInfoCollection:(id)arg1 ;
-(id)castedChildViewController;
-(DCDocumentCameraViewServiceSession *)viewServiceSession;
@end
