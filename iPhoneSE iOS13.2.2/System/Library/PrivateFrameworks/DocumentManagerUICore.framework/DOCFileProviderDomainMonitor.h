/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSOrderedSet;

@interface DOCFileProviderDomainMonitor : NSObject {

	id _providerDomainMonitoringContext;
	NSMutableDictionary* _providerNames;
	NSOrderedSet* _monitoredIdentifiers;
	/*^block*/id _monitorCallback;

}
-(id)init;
-(void)dealloc;
-(void)notifyIfNecessary;
-(void)monitorProviderDomainNamesForSourceIdentifiers:(id)arg1 callback:(/*^block*/id)arg2 ;
@end
