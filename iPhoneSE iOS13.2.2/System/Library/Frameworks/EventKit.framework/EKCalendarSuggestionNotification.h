/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKCalendarResourceChangeNotification.h>

@class SGEvent, NSString;

@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification {

	SGEvent* _suggestedEvent;
	NSString* _originAppName;

}

@property (nonatomic,readonly) NSString * originAppName; 
@property (nonatomic,readonly) SGEvent * suggestedEvent; 
+(id)_queue;
-(id)allDescriptionStringsWithOptions:(unsigned long long)arg1 ;
-(BOOL)supportsDisplay;
-(Class)_SGSuggestionsServiceClass;
-(void)updateSuggestedEventWithEventStore:(id)arg1 ;
-(SGEvent *)suggestedEvent;
-(NSString *)originAppName;
@end
