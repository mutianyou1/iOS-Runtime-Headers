/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSArray, NSString, NSDictionary;

@interface CalDAVCalendarSearchTask : CoreDAVTask {

	NSArray* _languages;
	NSString* _location;
	NSString* _calendarType;
	NSDictionary* _urlsToResults;

}

@property (nonatomic,retain,readonly) NSDictionary * urlsToResults;              //@synthesize urlsToResults=_urlsToResults - In the implementation block
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithLanguages:(id)arg1 location:(id)arg2 calendarType:(id)arg3 url:(id)arg4 ;
-(NSDictionary *)urlsToResults;
@end
