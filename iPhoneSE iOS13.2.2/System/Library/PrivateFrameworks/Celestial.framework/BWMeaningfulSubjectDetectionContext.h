/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWMeaningfulSubjectDetectionContext : NSObject {

	AcDetContextRef handle;
	SCD_Struct_BW88 state;
	SCD_Struct_BW90 params;
	SCD_Struct_BW91 control;
	void* detectionPlan;
	SCD_Struct_BW37* detectionNetwork;
	SCD_Struct_BW92* detectionOutputs[24];

}

@property (nonatomic,readonly) void* detectionPlan; 
+(void)initialize;
-(void)dealloc;
-(id)initWithDetectionNetworkURL:(id)arg1 context:(void*)arg2 priority:(int)arg3 ;
-(void*)detectionPlan;
@end

