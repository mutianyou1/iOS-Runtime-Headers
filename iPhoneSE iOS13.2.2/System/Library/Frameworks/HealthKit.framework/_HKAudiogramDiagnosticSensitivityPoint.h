/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _HKAudiogramDiagnosticSensitivityPoint : NSObject {

	double _earSensitivityDBHL;
	double _frequencyHz;

}

@property (nonatomic,readonly) double earSensitivityDBHL;              //@synthesize earSensitivityDBHL=_earSensitivityDBHL - In the implementation block
@property (nonatomic,readonly) double frequencyHz;                     //@synthesize frequencyHz=_frequencyHz - In the implementation block
-(double)frequencyHz;
-(double)earSensitivityDBHL;
-(id)initWithEarSensitivity:(id)arg1 frequency:(id)arg2 ;
@end

