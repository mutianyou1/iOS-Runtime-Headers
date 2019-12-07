/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNResultsObserving.h>

@class NSMutableArray, NSArray, NSString;

@interface SNResultsCollector : NSObject <SNResultsObserving> {

	NSMutableArray* _results;
	NSMutableArray* _errors;
	long long _completeCount;

}

@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,readonly) NSArray * errors; 
@property (nonatomic,readonly) long long completeCount;              //@synthesize completeCount=_completeCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)results;
-(NSArray *)errors;
-(void)clearErrors;
-(void)clearResults;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(void)requestDidComplete:(id)arg1 ;
-(long long)completeCount;
-(void)clearCompleteCount;
@end
