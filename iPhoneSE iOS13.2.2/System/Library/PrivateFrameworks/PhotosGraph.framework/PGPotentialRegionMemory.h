/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphNode, NSArray, NSDate, NSString;

@interface PGPotentialRegionMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphNode* _regionNode;
	long long _year;
	NSArray* _scenedAssets;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) PGGraphNode * regionNode;              //@synthesize regionNode=_regionNode - In the implementation block
@property (readonly) long long year;                        //@synthesize year=_year - In the implementation block
@property (readonly) NSString * region; 
@property (retain) NSArray * scenedAssets;                  //@synthesize scenedAssets=_scenedAssets - In the implementation block
@property (retain) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
-(long long)year;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)region;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithRegionNode:(id)arg1 year:(long long)arg2 ;
-(PGGraphNode *)regionNode;
-(NSArray *)scenedAssets;
-(void)setScenedAssets:(NSArray *)arg1 ;
@end

