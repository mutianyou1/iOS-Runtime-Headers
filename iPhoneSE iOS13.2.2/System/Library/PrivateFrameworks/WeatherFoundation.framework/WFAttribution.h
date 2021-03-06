/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface WFAttribution : NSObject

@property (readonly) NSString * sourceName; 
@property (readonly) NSString * localizedSourceAttribution; 
@property (readonly) NSURL * sourceAttributionURL; 
+(id)platformSpecializedWeatherSourceAttributionURLForTrafficParameter:(id)arg1 ;
+(id)weatherSourceAttributionURLForTrafficParameter:(id)arg1 ;
+(id)sharedAttribution;
-(NSString *)sourceName;
-(NSURL *)sourceAttributionURL;
-(NSString *)localizedSourceAttribution;
-(id)sourceAttributionImageForStyle:(unsigned long long)arg1 ;
@end

