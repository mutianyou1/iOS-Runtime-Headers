/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalChronometry : NSObject
+(void)initialize;
+(id)currentLanguageCode;
+(id)activeTimeZone;
+(id)activeCalendar;
+(void)_configureChronometry;
+(void)_updateActiveCalendar;
+(void)_currentLocaleDidChange:(id)arg1 ;
+(void)_currentTimeZoneDidChange:(id)arg1 ;
+(void)_updateForLocaleChange;
+(void)_updateEveything;
+(void)_updateActiveTimeZone;
+(void)setActiveTimeZone:(id)arg1 ;
+(id)currentLocationCode;
@end

