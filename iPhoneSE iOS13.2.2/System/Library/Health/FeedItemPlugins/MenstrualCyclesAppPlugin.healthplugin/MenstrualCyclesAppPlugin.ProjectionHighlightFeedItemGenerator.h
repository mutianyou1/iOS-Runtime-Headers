/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthExperience/HealthExperience.AsyncOperation.h>
#import <libobjc.A.dylib/HKMCAnalysisProviderObserver.h>

@interface MenstrualCyclesAppPlugin.ProjectionHighlightFeedItemGenerator : HealthExperience.AsyncOperation <HKMCAnalysisProviderObserver> {

	 context;
	 submissionEvaluator;
	 analysisProvider;
	 menstrualCyclesAvailabilityProvider;

}
-(void)analysisProvider:(id)arg1 didUpdateAnalysis:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)main;
@end

