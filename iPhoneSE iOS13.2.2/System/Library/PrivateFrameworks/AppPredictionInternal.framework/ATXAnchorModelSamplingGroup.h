/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ATXAnchorModelSamplingGroup : NSObject {

	NSArray* _anchorWhitelist;
	long long _samplingGroupId;

}

@property (nonatomic,readonly) NSArray * anchorWhitelist;              //@synthesize anchorWhitelist=_anchorWhitelist - In the implementation block
@property (nonatomic,readonly) long long samplingGroupId;              //@synthesize samplingGroupId=_samplingGroupId - In the implementation block
+(id)getSamplingGroupForDataCollection;
+(void)resetSamplingGroupAssignmentForUser;
+(long long)assignSamplingGroupToUserAndPersistToDefaults:(id)arg1 ;
+(long long)selectSamplingGroupForUser;
+(unsigned long long)numSamplingGroups;
+(id)samplingGroupFromSamplingGroupId:(long long)arg1 ;
-(id)init;
-(id)description;
-(id)initWithAnchorWhitelist:(id)arg1 samplingGroupId:(long long)arg2 ;
-(NSArray *)anchorWhitelist;
-(long long)samplingGroupId;
@end
