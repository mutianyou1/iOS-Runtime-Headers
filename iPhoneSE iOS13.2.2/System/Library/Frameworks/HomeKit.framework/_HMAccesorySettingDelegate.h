/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _HMAccesorySettingDelegate <NSObject>
@optional
-(void)_setting:(id)arg1 didAddConstraint:(id)arg2;
-(void)_setting:(id)arg1 didRemoveConstraint:(id)arg2;

@required
-(void)_settingWillUpdateReflected:(id)arg1;
-(void)_settingDidUpdateReflected:(id)arg1;
-(void)_settingWillUpdateValue:(id)arg1;
-(void)_settingDidUpdateValue:(id)arg1;

@end
