/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVLivePlayerThermalThrottlingPolicy : NSObject {

	HGSynchronizable* _lock;
	map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::__1::less<PVSPI_OSThermalPressureLevel>, std::__1::allocator<std::__1::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *> > >* _policy;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setThermalLevel:(int)arg1 controlParameters:(id)arg2 ;
-(id)populatedControlParametersForCurrentThermalLevel;
-(id)populatedControlParametersForThermalLevel:(int)arg1 ;
-(id)controlParametersForThermalLevel:(int)arg1 ;
@end
