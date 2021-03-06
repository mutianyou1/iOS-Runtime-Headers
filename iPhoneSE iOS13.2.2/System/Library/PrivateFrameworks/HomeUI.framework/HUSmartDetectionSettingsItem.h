/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class NSSet;

@interface HUSmartDetectionSettingsItem : HFItem {

	unsigned long long _motionDetectionType;
	NSSet* _cameraProfiles;
	unsigned long long _settingsContext;

}

@property (nonatomic,readonly) unsigned long long motionDetectionType;              //@synthesize motionDetectionType=_motionDetectionType - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cameraProfiles;                         //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) unsigned long long settingsContext;                  //@synthesize settingsContext=_settingsContext - In the implementation block
-(unsigned long long)settingsContext;
-(NSSet *)cameraProfiles;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)motionDetectionType;
-(id)initWithDetectionType:(unsigned long long)arg1 cameraProfiles:(id)arg2 settingsContext:(unsigned long long)arg3 ;
@end

