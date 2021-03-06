/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate> {

	id _bundleOrBundleIdentifier;
	CLLocationManager* _locationManager;
	Ai _status;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)authorizationStatusForBundle:(id)arg1 ;
+(id)logHandle;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(int)authorizationStatus;
-(id)initWithBundleID:(id)arg1 bundle:(id)arg2 queue:(id)arg3 ;
@end

