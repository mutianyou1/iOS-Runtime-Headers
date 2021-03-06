/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPContainer.h>

@class MSPContainer;

@interface MSPCollectionsContainer : MSPContainer {

	MSPContainer* _itemContainer;

}

@property (nonatomic,retain) MSPContainer * itemContainer;              //@synthesize itemContainer=_itemContainer - In the implementation block
+(id)sharedLocalContainer;
+(id)sharedRemoteContainer;
-(MSPContainer *)itemContainer;
-(void)setItemContainer:(MSPContainer *)arg1 ;
-(id)initWithPersister:(id)arg1 itemContainer:(id)arg2 ;
-(id)queryWithDelegate:(id)arg1 ;
@end

