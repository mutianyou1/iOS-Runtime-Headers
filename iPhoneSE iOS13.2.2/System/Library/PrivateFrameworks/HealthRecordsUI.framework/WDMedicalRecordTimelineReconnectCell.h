/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class HKDynamicButton;

@interface WDMedicalRecordTimelineReconnectCell : WDMedicalRecordGroupableCell {

	HKDynamicButton* _reconnectButton;

}

@property (nonatomic,retain) HKDynamicButton * reconnectButton;              //@synthesize reconnectButton=_reconnectButton - In the implementation block
-(void)prepareForReuse;
-(void)setupSubviews;
-(void)setUpConstraints;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(HKDynamicButton *)reconnectButton;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg1 ;
-(void)setReconnectButton:(HKDynamicButton *)arg1 ;
@end
