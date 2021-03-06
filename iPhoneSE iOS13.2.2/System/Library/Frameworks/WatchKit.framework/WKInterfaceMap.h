/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <WatchKit/WKInterfaceObject.h>

@interface WKInterfaceMap : WKInterfaceObject
-(void)setRegion:(SCD_Struct_WK7)arg1 ;
-(void)removeAllAnnotations;
-(void)setVisibleMapRect:(SCD_Struct_WK8)arg1 ;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withImage:(id)arg2 centerOffset:(CGPoint)arg3 ;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withImageNamed:(id)arg2 centerOffset:(CGPoint)arg3 ;
-(void)addAnnotation:(CLLocationCoordinate2D)arg1 withPinColor:(long long)arg2 ;
@end

