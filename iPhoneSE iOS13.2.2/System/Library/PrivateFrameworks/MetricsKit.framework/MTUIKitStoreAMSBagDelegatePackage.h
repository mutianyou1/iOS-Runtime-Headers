/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTDelegatePackage.h>

@class MTConfigAMSMetricsDelegate, MTEventRecorderAMSMetricsDelegate, MTConvenienceEnvironmentDelegate, NSString;

@interface MTUIKitStoreAMSBagDelegatePackage : NSObject <MTDelegatePackage> {

	/*^block*/id _hostAppBlock;
	MTConfigAMSMetricsDelegate* _configDelegate;
	MTEventRecorderAMSMetricsDelegate* _eventRecorderDelegate;
	MTConvenienceEnvironmentDelegate* _environmentDelegate;

}

@property (nonatomic,copy) id hostAppBlock;                                                          //@synthesize hostAppBlock=_hostAppBlock - In the implementation block
@property (nonatomic,retain) MTConfigAMSMetricsDelegate * configDelegate;                            //@synthesize configDelegate=_configDelegate - In the implementation block
@property (nonatomic,retain) MTEventRecorderAMSMetricsDelegate * eventRecorderDelegate;              //@synthesize eventRecorderDelegate=_eventRecorderDelegate - In the implementation block
@property (nonatomic,retain) MTConvenienceEnvironmentDelegate * environmentDelegate;                 //@synthesize environmentDelegate=_environmentDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithAMSBag:(id)arg1 ;
-(id)initWithAMSBag:(id)arg1 containerId:(id)arg2 pageURLBlock:(/*^block*/id)arg3 resourceRevNumBlock:(/*^block*/id)arg4 hostAppBlock:(/*^block*/id)arg5 ;
-(MTConfigAMSMetricsDelegate *)configDelegate;
-(MTEventRecorderAMSMetricsDelegate *)eventRecorderDelegate;
-(MTConvenienceEnvironmentDelegate *)environmentDelegate;
-(id)hostAppBlock;
-(void)setHostAppBlock:(id)arg1 ;
-(void)setConfigDelegate:(MTConfigAMSMetricsDelegate *)arg1 ;
-(void)setEventRecorderDelegate:(MTEventRecorderAMSMetricsDelegate *)arg1 ;
-(void)setEnvironmentDelegate:(MTConvenienceEnvironmentDelegate *)arg1 ;
@end
