/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchSupportedDevicePropertiesResultObject : CATTaskResultObject {

	NSArray* _staticProperties;
	NSArray* _liveProperties;

}

@property (nonatomic,retain) NSArray * staticProperties;              //@synthesize staticProperties=_staticProperties - In the implementation block
@property (nonatomic,retain) NSArray * liveProperties;                //@synthesize liveProperties=_liveProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)staticProperties;
-(NSArray *)liveProperties;
-(void)setStaticProperties:(NSArray *)arg1 ;
-(void)setLiveProperties:(NSArray *)arg1 ;
@end

