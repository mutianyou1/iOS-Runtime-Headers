/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber;


@protocol HUStepperCellProtocol <NSObject>
@property (assign,nonatomic,__weak) id<HUStepperCellDelegate> stepperCellDelegate; 
@property (nonatomic,copy) NSNumber * minimumValue; 
@property (nonatomic,copy) NSNumber * maximumValue; 
@property (nonatomic,copy) NSNumber * stepValue; 
@property (nonatomic,copy) NSNumber * stepperValue; 
@required
-(void)setMinimumValue:(id)arg1;
-(void)setMaximumValue:(id)arg1;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setStepValue:(id)arg1;
-(NSNumber *)stepValue;
-(NSNumber *)stepperValue;
-(void)setStepperValue:(id)arg1;
-(id<HUStepperCellDelegate>)stepperCellDelegate;
-(void)setStepperCellDelegate:(id)arg1;

@end

