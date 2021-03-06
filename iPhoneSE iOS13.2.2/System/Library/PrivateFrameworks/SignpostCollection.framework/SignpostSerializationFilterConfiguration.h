/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SignpostSupportSubsystemCategoryFilter, SignpostSupportPIDFilter, SignpostSupportUniquePIDFilter, SignpostSupportExactProcessNameFilter;

@interface SignpostSerializationFilterConfiguration : NSObject {

	SignpostSupportSubsystemCategoryFilter* _subsystemCategoryFilter;
	SignpostSupportPIDFilter* _pidFilter;
	SignpostSupportUniquePIDFilter* _uniquePidFilter;
	SignpostSupportExactProcessNameFilter* _processNameFilter;

}

@property (nonatomic,retain) SignpostSupportSubsystemCategoryFilter * subsystemCategoryFilter;              //@synthesize subsystemCategoryFilter=_subsystemCategoryFilter - In the implementation block
@property (nonatomic,retain) SignpostSupportPIDFilter * pidFilter;                                          //@synthesize pidFilter=_pidFilter - In the implementation block
@property (nonatomic,retain) SignpostSupportUniquePIDFilter * uniquePidFilter;                              //@synthesize uniquePidFilter=_uniquePidFilter - In the implementation block
@property (nonatomic,retain) SignpostSupportExactProcessNameFilter * processNameFilter;                     //@synthesize processNameFilter=_processNameFilter - In the implementation block
-(SignpostSupportSubsystemCategoryFilter *)subsystemCategoryFilter;
-(SignpostSupportPIDFilter *)pidFilter;
-(SignpostSupportUniquePIDFilter *)uniquePidFilter;
-(SignpostSupportExactProcessNameFilter *)processNameFilter;
-(void)setSubsystemCategoryFilter:(SignpostSupportSubsystemCategoryFilter *)arg1 ;
-(void)setProcessNameFilter:(SignpostSupportExactProcessNameFilter *)arg1 ;
-(void)setPidFilter:(SignpostSupportPIDFilter *)arg1 ;
-(void)setUniquePidFilter:(SignpostSupportUniquePIDFilter *)arg1 ;
@end

