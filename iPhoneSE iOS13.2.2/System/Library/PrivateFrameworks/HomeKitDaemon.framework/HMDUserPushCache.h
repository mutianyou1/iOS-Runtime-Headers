/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSDate;

@interface HMDUserPushCache : HMFObject {

	HMDDevice* _device;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) HMDDevice * device;                         //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
-(id)init;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(HMDDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isExpired;
@end

