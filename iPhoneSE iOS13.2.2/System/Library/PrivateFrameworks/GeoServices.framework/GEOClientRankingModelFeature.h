/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOClientRankingModelFeatureIdentifier, GEOClientRankingModelFeatureFunction;

@interface GEOClientRankingModelFeature : NSObject {

	GEOClientRankingModelFeatureIdentifier* _featureIdentifier;
	GEOClientRankingModelFeatureFunction* _function;

}

@property (nonatomic,readonly) GEOClientRankingModelFeatureIdentifier * featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,readonly) GEOClientRankingModelFeatureFunction * function;                         //@synthesize function=_function - In the implementation block
-(id)init;
-(GEOClientRankingModelFeatureFunction *)function;
-(id)initWithGEOPDClientRankingFeatureMetadata:(id)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg1 function:(id)arg2 ;
-(GEOClientRankingModelFeatureIdentifier *)featureIdentifier;
@end

