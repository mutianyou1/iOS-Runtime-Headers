/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSXPCInterface;


@protocol FMNSXPCConnectionConfigurable <NSObject>
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) NSXPCInterface * remoteInterface; 
@property (nonatomic,readonly) NSXPCInterface * exportedInterface; 
@property (nonatomic,readonly) BOOL machService; 
@required
-(unsigned long long)options;
-(NSString *)serviceName;
-(NSXPCInterface *)exportedInterface;
-(NSXPCInterface *)remoteInterface;
-(BOOL)machService;

@end

