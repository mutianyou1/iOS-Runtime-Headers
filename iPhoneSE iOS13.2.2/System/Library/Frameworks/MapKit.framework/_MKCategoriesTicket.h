/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapServiceCategoriesTicket.h>

@protocol GEOMapServiceCategoriesTicket;
@class GEOMapServiceTraits, NSString;

@interface _MKCategoriesTicket : NSObject <MKMapServiceCategoriesTicket> {

	id<GEOMapServiceCategoriesTicket> _ticket;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(GEOMapServiceTraits *)traits;
-(id)initWithTicket:(id)arg1 ;
@end

