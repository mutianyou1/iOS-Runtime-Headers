/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVHapticPlayerParameterCurveControlPoint : NSObject {

	float _value;
	double _time;

}

@property (assign) double time;              //@synthesize time=_time - In the implementation block
@property (assign) float value;              //@synthesize value=_value - In the implementation block
-(float)value;
-(void)setValue:(float)arg1 ;
-(double)time;
-(void)setTime:(double)arg1 ;
-(id)initWithTime:(double)arg1 value:(float)arg2 ;
@end
