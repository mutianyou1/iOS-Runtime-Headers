/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EAWiFiUnconfiguredAccessory : NSObject {

	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _ssid;
	NSString* _macAddress;
	unsigned long long _properties;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturer;               //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * ssid;                       //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy,readonly) NSString * macAddress;                 //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long properties;              //@synthesize properties=_properties - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSString *)model;
-(unsigned long long)properties;
-(NSString *)ssid;
-(NSString *)macAddress;
-(NSString *)manufacturer;
-(id)initWithAirPortAssistantWACDevice:(id)arg1 ;
@end
