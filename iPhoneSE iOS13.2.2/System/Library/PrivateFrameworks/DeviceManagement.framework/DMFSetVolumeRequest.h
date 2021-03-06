/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFSetVolumeRequest : DMFTaskRequest {

	float _volume;

}

@property (assign,nonatomic) float volume;              //@synthesize volume=_volume - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
@end

