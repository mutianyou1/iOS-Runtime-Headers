/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSFileManager;

@interface HDDemoData : NSObject {

	NSString* _demoDataPath;
	NSFileManager* _fileManager;

}
+(BOOL)shouldUseDemoDataDirectory;
+(BOOL)willBeGeneratingDemoData;
+(id)demoDataDirectory;
-(id)_directoryPath;
-(id)initWithProfileType:(long long)arg1 ;
-(BOOL)_resetDemoDataDB;
@end

