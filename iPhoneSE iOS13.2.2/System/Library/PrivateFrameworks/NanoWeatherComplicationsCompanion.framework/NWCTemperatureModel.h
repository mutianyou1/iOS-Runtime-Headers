/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, NSArray;

@interface NWCTemperatureModel : NSObject {

	double _fraction;
	NSString* _localizedTemperatureCurrent;
	NSString* _localizedTemperatureHigh;
	UIColor* _tintColorHigh;
	NSString* _localizedTemperatureLow;
	UIColor* _tintColorLow;
	NSArray* _spectrum;
	NSArray* _spectrumTicks;

}

@property (nonatomic,readonly) double fraction;                                     //@synthesize fraction=_fraction - In the implementation block
@property (nonatomic,readonly) NSString * localizedTemperatureCurrent;              //@synthesize localizedTemperatureCurrent=_localizedTemperatureCurrent - In the implementation block
@property (nonatomic,readonly) NSString * localizedTemperatureHigh;                 //@synthesize localizedTemperatureHigh=_localizedTemperatureHigh - In the implementation block
@property (nonatomic,readonly) UIColor * tintColorHigh;                             //@synthesize tintColorHigh=_tintColorHigh - In the implementation block
@property (nonatomic,readonly) NSString * localizedTemperatureLow;                  //@synthesize localizedTemperatureLow=_localizedTemperatureLow - In the implementation block
@property (nonatomic,readonly) UIColor * tintColorLow;                              //@synthesize tintColorLow=_tintColorLow - In the implementation block
@property (nonatomic,readonly) NSArray * spectrum;                                  //@synthesize spectrum=_spectrum - In the implementation block
@property (nonatomic,readonly) NSArray * spectrumTicks;                             //@synthesize spectrumTicks=_spectrumTicks - In the implementation block
+(id)temperatureModelForCurrentObservation:(id)arg1 dailyForecastedConditions:(id)arg2 temperatureFormatter:(id)arg3 shouldUseNoUnitCurrentTemperature:(BOOL)arg4 ;
-(double)fraction;
-(NSArray *)spectrum;
-(NSString *)localizedTemperatureCurrent;
-(NSString *)localizedTemperatureHigh;
-(UIColor *)tintColorHigh;
-(NSString *)localizedTemperatureLow;
-(UIColor *)tintColorLow;
-(NSArray *)spectrumTicks;
@end
