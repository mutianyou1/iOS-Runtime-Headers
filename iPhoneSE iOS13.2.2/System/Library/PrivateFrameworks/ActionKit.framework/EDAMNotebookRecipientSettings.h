/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNotebookRecipientSettings : FATObject {

	NSNumber* _reminderNotifyEmail;
	NSNumber* _reminderNotifyInApp;
	NSNumber* _inMyList;
	NSString* _stack;

}

@property (nonatomic,retain) NSNumber * reminderNotifyEmail;              //@synthesize reminderNotifyEmail=_reminderNotifyEmail - In the implementation block
@property (nonatomic,retain) NSNumber * reminderNotifyInApp;              //@synthesize reminderNotifyInApp=_reminderNotifyInApp - In the implementation block
@property (nonatomic,retain) NSNumber * inMyList;                         //@synthesize inMyList=_inMyList - In the implementation block
@property (nonatomic,retain) NSString * stack;                            //@synthesize stack=_stack - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setStack:(NSString *)arg1 ;
-(NSString *)stack;
-(NSNumber *)reminderNotifyEmail;
-(void)setReminderNotifyEmail:(NSNumber *)arg1 ;
-(NSNumber *)reminderNotifyInApp;
-(void)setReminderNotifyInApp:(NSNumber *)arg1 ;
-(NSNumber *)inMyList;
-(void)setInMyList:(NSNumber *)arg1 ;
@end

