/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _ATXScoreInterpreterCoreMLModelFeature : NSObject {

	NSString* _featureName;
	long long _featureType;
	unsigned long long _multiArraySize;

}

@property (nonatomic,readonly) NSString * featureName;                         //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,readonly) long long featureType;                          //@synthesize featureType=_featureType - In the implementation block
@property (nonatomic,readonly) unsigned long long multiArraySize;              //@synthesize multiArraySize=_multiArraySize - In the implementation block
-(id)init;
-(NSString *)featureName;
-(long long)featureType;
-(id)initWithFeatureName:(id)arg1 multiArraySize:(unsigned long long)arg2 ;
-(id)initWithFeatureName:(id)arg1 ;
-(unsigned long long)multiArraySize;
@end

