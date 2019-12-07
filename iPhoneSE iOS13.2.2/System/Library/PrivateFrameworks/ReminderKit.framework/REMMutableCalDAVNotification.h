/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/REMCalDAVNotification.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataWritableProviding.h>

@class NSString, NSURL;

@interface REMMutableCalDAVNotification : REMCalDAVNotification <REMExternalSyncMetadataWritableProviding>

@property (nonatomic,retain) NSString * uuidString; 
@property (nonatomic,retain) NSURL * hostURL; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
@end
