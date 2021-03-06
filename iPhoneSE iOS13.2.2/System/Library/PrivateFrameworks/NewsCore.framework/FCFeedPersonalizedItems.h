/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMapTable;

@interface FCFeedPersonalizedItems : NSObject {

	NSArray* _itemsToShow;
	NSArray* _itemsToHide;
	NSMapTable* _scoreProfiles;

}

@property (nonatomic,retain) NSArray * itemsToShow;                   //@synthesize itemsToShow=_itemsToShow - In the implementation block
@property (nonatomic,retain) NSArray * itemsToHide;                   //@synthesize itemsToHide=_itemsToHide - In the implementation block
@property (nonatomic,retain) NSMapTable * scoreProfiles;              //@synthesize scoreProfiles=_scoreProfiles - In the implementation block
-(NSArray *)itemsToShow;
-(void)setItemsToShow:(NSArray *)arg1 ;
-(NSArray *)itemsToHide;
-(void)setItemsToHide:(NSArray *)arg1 ;
-(NSMapTable *)scoreProfiles;
-(void)setScoreProfiles:(NSMapTable *)arg1 ;
@end

