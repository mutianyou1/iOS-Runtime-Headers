/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLengthFormatter.h>

@class NSLocale;

@interface WeatherPrecipitationFormatter : NSLengthFormatter {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)convenienceFormatter;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(id)stringFromDistance:(double)arg1 isDataMetric:(BOOL)arg2 ;
-(long long)precipitationUnit;
-(double)convertDistanceInMetric:(double)arg1 to:(long long)arg2 ;
-(double)convertDistanceInImperial:(double)arg1 to:(long long)arg2 ;
-(id)stringFromCentimeters:(double)arg1 ;
-(id)stringFromInches:(double)arg1 ;
@end

