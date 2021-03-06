/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/_EDWrappedMessage.h>

@class EDMessagePersistence;

@interface _EDLazyWrappedMessage : _EDWrappedMessage {

	long long _databaseID;
	EDMessagePersistence* _messagePersistence;

}

@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;              //@synthesize messagePersistence=_messagePersistence - In the implementation block
-(long long)databaseID;
-(EDMessagePersistence *)messagePersistence;
-(id)initWithMessage:(id)arg1 messagePersistence:(id)arg2 ;
@end

