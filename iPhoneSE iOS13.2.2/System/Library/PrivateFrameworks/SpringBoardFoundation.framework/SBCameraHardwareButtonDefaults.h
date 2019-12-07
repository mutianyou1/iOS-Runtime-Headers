/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBCameraHardwareButtonDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) double shutterButtonLongPressTimeout; 
@property (nonatomic,readonly) double shutterButtonLongPressCancellationTimeout; 
@property (nonatomic,readonly) BOOL shutterButtonShouldUsePocketDetection; 
-(void)setShutterButtonLongPressTimeout:(double)arg1 ;
-(double)shutterButtonLongPressTimeout;
-(void)setShutterButtonLongPressCancellationTimeout:(double)arg1 ;
-(double)shutterButtonLongPressCancellationTimeout;
-(void)setShutterButtonShouldUsePocketDetection:(BOOL)arg1 ;
-(BOOL)shutterButtonShouldUsePocketDetection;
-(void)_bindAndRegisterDefaults;
@end
