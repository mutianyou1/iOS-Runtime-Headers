/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface RegisteredPreKey : NSManagedObject

@property (nonatomic,copy) NSString * tag; 
@property (nonatomic,retain) NSSet * senders; 
+(id)fetchRequest;
@end
