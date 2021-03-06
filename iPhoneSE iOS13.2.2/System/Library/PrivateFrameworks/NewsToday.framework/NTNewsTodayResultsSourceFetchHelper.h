/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject {

	NSMutableArray* _sectionQueueDescriptors;
	NSMutableDictionary* _remainingSectionsBySectionQueueDescriptors;

}

@property (nonatomic,retain) NSMutableArray * sectionQueueDescriptors;                                      //@synthesize sectionQueueDescriptors=_sectionQueueDescriptors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remainingSectionsBySectionQueueDescriptors;              //@synthesize remainingSectionsBySectionQueueDescriptors=_remainingSectionsBySectionQueueDescriptors - In the implementation block
-(id)init;
-(NSMutableArray *)sectionQueueDescriptors;
-(NSMutableDictionary *)remainingSectionsBySectionQueueDescriptors;
-(id)initWithSectionQueueDescriptors:(id)arg1 ;
-(id)sectionDescriptorsAtHeadsOfQueues;
-(void)removeSectionDescriptors:(id)arg1 ;
-(void)setSectionQueueDescriptors:(NSMutableArray *)arg1 ;
-(void)setRemainingSectionsBySectionQueueDescriptors:(NSMutableDictionary *)arg1 ;
@end

