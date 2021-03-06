/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXHeuristicDevice;

@interface ATXUserAppPreferenceDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(BOOL)parametersExistInValidCombinationsForParameters:(id)arg1 andValidCombinations:(id)arg2 ;
-(BOOL)appSupportsParameterCombination:(id)arg1 forIntent:(id)arg2 forBundleId:(id)arg3 ;
-(void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

