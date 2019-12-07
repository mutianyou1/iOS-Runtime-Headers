/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@class UITableViewCell, UISwitch;

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	UISwitch* _switch;

}
-(id)_cell;
-(UIEdgeInsets)separatorInset;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)titleForHeader;
-(id)titleForFooter;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(void)_switchSwitched:(id)arg1 ;
@end
