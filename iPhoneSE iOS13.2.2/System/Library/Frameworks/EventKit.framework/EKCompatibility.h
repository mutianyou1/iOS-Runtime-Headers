/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@interface EKCompatibility : NSObject
+(BOOL)simulateLegacyBehaviors;
+(BOOL)isProgramSDKAtLeast:(SCD_Struct_EK2)arg1 ;
+(void)perform:(/*^block*/id)arg1 whileSimulatingLegacyBehaviors:(BOOL)arg2 ;
+(void)setSimulateLegacyBehaviors:(BOOL)arg1 ;
+(void)performWhileSimulatingLegacyBehaviors:(/*^block*/id)arg1 ;
@end

