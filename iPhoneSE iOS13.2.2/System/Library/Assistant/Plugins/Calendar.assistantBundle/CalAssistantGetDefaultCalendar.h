/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectCommit.h>

@class EKEventStore;

@interface CalAssistantGetDefaultCalendar : SADomainObjectCommit {

	EKEventStore* _eventStore;

}
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)eventStore;
-(void)setEventStore:(id)arg1 ;
@end
