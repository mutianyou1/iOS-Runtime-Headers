/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
@class NSString, NSArray;

@interface _SSBServiceStatus : NSObject {

	ServiceStatus* _serviceStatus;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) int processIdentifier; 
@property (nonatomic,copy,readonly) NSArray * activeTransactions; 
@property (nonatomic,readonly) NSArray * databaseUpdatersStatuses; 
@property (nonatomic,readonly) unsigned long long connectionCount; 
@property (nonatomic,readonly) unsigned long long databaseUpdaterState; 
-(NSString *)name;
-(int)processIdentifier;
-(unsigned long long)connectionCount;
-(NSArray *)activeTransactions;
-(id)initWithServiceStatus:(ServiceStatus*)arg1 ;
-(int)processIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
-(id)bundleIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
-(NSArray *)databaseUpdatersStatuses;
-(unsigned long long)databaseUpdaterState;
@end

