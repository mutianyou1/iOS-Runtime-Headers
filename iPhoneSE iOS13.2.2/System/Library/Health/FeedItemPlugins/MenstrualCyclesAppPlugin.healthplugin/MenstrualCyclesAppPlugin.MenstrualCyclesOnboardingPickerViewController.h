/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingPickerViewController : OBWelcomeController <UIPickerViewDelegate, UIPickerViewDataSource> {

	 userInfo;
	 delegate;
	 pickerType;
	 descriptionText;
	 $__lazy_storage_$_dayPickerRange;
	 $__lazy_storage_$_datePicker;
	 $__lazy_storage_$_dayPicker;
	 $__lazy_storage_$_dateComponentsFormatter;
	 $__lazy_storage_$_pickerDetailLabel;
	 $__lazy_storage_$_descriptionLabel;
	 $__lazy_storage_$_nextButton;

}
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)nextButtonTapped:(id)arg1 ;
-(void)skipButtonTapped:(id)arg1 ;
@end

