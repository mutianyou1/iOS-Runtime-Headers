/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPCNNPoseEstimator.h>

@class VCPCNNModel, VCPCNNData;

@interface VCPCNNPoseEstimatorMPS : VCPCNNPoseEstimator {

	VCPCNNModel* _model;
	VCPCNNData* _input;

}
-(id)init;
-(float*)getInputBuffer;
-(int)computePoseScore:(float*)arg1 ;
@end

