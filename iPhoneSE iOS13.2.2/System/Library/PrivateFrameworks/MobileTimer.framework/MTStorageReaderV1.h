/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>
#import <libobjc.A.dylib/MTSerializer.h>

@class NSCoder;

@interface MTStorageReaderV1 : NSKeyedUnarchiver <MTSerializer>

@property (nonatomic,readonly) unsigned long long mtType; 
@property (nonatomic,readonly) NSCoder * mtCoder; 
-(unsigned long long)mtType;
-(NSCoder *)mtCoder;
@end

