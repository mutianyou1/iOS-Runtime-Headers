/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CLLSLLocationCoordinate;

@interface _CLLSLLocation : NSObject <NSCopying, NSSecureCoding> {

	_CLLSLLocationCoordinate* _coordinate;
	double _altitude;
	double _timestamp;

}

@property (nonatomic,copy) _CLLSLLocationCoordinate * coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double altitude;                                  //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_CLLSLLocationCoordinate *)coordinate;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(id)initWithCoordinate:(id)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(double)altitude;
-(id)initWithCoordinate:(id)arg1 altitude:(double)arg2 timetamp:(double)arg3 ;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 timetamp:(double)arg4 ;
-(void)setCoordinate:(_CLLSLLocationCoordinate *)arg1 ;
@end
