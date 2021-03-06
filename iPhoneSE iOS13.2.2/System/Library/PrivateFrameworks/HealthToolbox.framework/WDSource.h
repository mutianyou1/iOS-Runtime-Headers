/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKSourceDataModel, HKDevice, NSString;

@interface WDSource : NSObject {

	HKSourceDataModel* _sourceModel;
	HKDevice* _device;
	NSString* _name;

}

@property (nonatomic,readonly) HKSourceDataModel * sourceModel;              //@synthesize sourceModel=_sourceModel - In the implementation block
@property (nonatomic,readonly) HKDevice * device;                            //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(HKDevice *)device;
-(HKSourceDataModel *)sourceModel;
-(id)initWithSource:(id)arg1 device:(id)arg2 ;
@end

