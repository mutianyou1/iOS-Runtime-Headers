/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthToolbox/WDDisplayTypeAddDataViewController.h>

@class WDAddDataManualEntryItem;

@interface WDHeightAddDataViewController : WDDisplayTypeAddDataViewController {

	WDAddDataManualEntryItem* _heightPickerManualEntryItem;

}
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 ;
-(id)_feetUnitString;
-(id)_inchUnitString;
-(BOOL)_inputUnitIsFeetWithDisplayType:(id)arg1 unitController:(id)arg2 ;
-(id)createValueFieldManualEntryItem;
@end

