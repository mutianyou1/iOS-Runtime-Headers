/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface REUpNextSetNode : NSObject {

	id _item;
	REUpNextSetNode* _parent;
	NSMutableArray* _children;
	unsigned long long _rank;

}

@property (nonatomic,readonly) id item;                              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) REUpNextSetNode * parent;               //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSMutableArray * children;              //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                //@synthesize rank=_rank - In the implementation block
-(REUpNextSetNode *)parent;
-(void)setParent:(REUpNextSetNode *)arg1 ;
-(id)item;
-(void)remove;
-(id)rootNode;
-(void)setRank:(unsigned long long)arg1 ;
-(unsigned long long)rank;
-(NSMutableArray *)children;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)join:(id)arg1 ;
@end
