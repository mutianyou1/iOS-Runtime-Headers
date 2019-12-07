/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKOverlayContext <NSObject>
@optional
-(void)overlayStateDidChange:(BOOL)arg1 contextItem:(id)arg2 chartController:(id)arg3;
-(void)invalidateContextItem;

@required
-(id)contextItemForLastUpdate;
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3;
-(id)sampleTypeForDateRangeUpdates;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1;

@end
