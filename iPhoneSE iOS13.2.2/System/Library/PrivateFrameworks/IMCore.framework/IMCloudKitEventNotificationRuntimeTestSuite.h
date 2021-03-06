/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMRuntimeTestSuite.h>
#import <IMCore/IMCloudKitEventHandler.h>

@class IMCloudKitHookTestSingleton, NSString;

@interface IMCloudKitEventNotificationRuntimeTestSuite : IMRuntimeTestSuite <IMCloudKitEventHandler> {

	BOOL _shouldTearDown;
	IMCloudKitHookTestSingleton* _cloudKitHooks;

}

@property (assign) BOOL shouldTearDown;                                                //@synthesize shouldTearDown=_shouldTearDown - In the implementation block
@property (nonatomic,retain) IMCloudKitHookTestSingleton * cloudKitHooks;              //@synthesize cloudKitHooks=_cloudKitHooks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)runTestsIfNeeded;
-(id)init;
-(void)tearDown;
-(void)setUp;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(IMCloudKitHookTestSingleton *)cloudKitHooks;
-(void)setCloudKitHooks:(IMCloudKitHookTestSingleton *)arg1 ;
-(void)setShouldTearDown:(BOOL)arg1 ;
-(BOOL)shouldTearDown;
@end

