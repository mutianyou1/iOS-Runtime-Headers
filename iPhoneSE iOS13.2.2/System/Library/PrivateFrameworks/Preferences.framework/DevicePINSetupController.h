/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSSetupController.h>

@interface DevicePINSetupController : PSSetupController {

	BOOL _success;
	BOOL _allowOptionsButton;

}

@property (assign,nonatomic) BOOL allowOptionsButton;              //@synthesize allowOptionsButton=_allowOptionsButton - In the implementation block
-(id)init;
-(BOOL)success;
-(CGSize)preferredContentSize;
-(BOOL)canBeShownFromSuspendedState;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(BOOL)usePopupStyle;
-(BOOL)popupStyleIsModal;
-(void)setAllowOptionsButton:(BOOL)arg1 ;
-(BOOL)allowOptionsButton;
@end

