/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBSPerSitePreferenceTimeout : NSObject {

	double _interval;
	id _fallbackValue;

}

@property (nonatomic,readonly) double interval;               //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) id fallbackValue;              //@synthesize fallbackValue=_fallbackValue - In the implementation block
+(id)timeoutWithInterval:(double)arg1 fallbackValue:(id)arg2 ;
-(double)interval;
-(id)initWithInterval:(double)arg1 fallbackValue:(id)arg2 ;
-(id)fallbackValue;
@end

