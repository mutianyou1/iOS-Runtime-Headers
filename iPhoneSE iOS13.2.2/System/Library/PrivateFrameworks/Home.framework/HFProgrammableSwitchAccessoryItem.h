/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>
#import <libobjc.A.dylib/HFServiceLikeBuilderCreating.h>
#import <libobjc.A.dylib/HFActionBuilderFactory.h>

@protocol HFCharacteristicValueSource;
@class HMAccessory, NSString, HMHome, NSSet;

@interface HFProgrammableSwitchAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating, HFActionBuilderFactory> {

	HMAccessory* _accessory;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,retain) HMAccessory * accessory;                                  //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) NSSet * services; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(NSSet *)services;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)accessories;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 valueSource:(id)arg2 ;
-(id<HFHomeKitObject>)homeKitObject;
-(BOOL)shouldReduceOptionItemsForNotifyingCharacteristics;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)containsActions;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
-(BOOL)actionsMayRequireDeviceUnlock;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
@end
