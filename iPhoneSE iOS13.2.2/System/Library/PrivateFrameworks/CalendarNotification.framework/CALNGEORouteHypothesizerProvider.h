/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNRouteHypothesizerProvider.h>

@class NSString;

@interface CALNGEORouteHypothesizerProvider : NSObject <CALNRouteHypothesizerProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)hypothesizerForPlannedDestination:(id)arg1 ;
-(void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3 ;
-(void)createdRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2 ;
-(void)removedRouteHypothesizerForEventExternalURL:(id)arg1 ;
@end

