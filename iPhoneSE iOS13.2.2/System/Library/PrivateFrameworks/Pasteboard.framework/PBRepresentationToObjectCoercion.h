/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableOrderedSet;

@interface PBRepresentationToObjectCoercion : NSObject {

	Class _theClass;
	NSMutableDictionary* _blockByType;
	NSMutableOrderedSet* _typeOrder;

}

@property (nonatomic,retain) Class theClass;                                 //@synthesize theClass=_theClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * blockByType;              //@synthesize blockByType=_blockByType - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * typeOrder;                //@synthesize typeOrder=_typeOrder - In the implementation block
-(id)initWithClass:(Class)arg1 ;
-(void)addCoercionFromType:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)availableImportTypes;
-(BOOL)canCoerceFromType:(id)arg1 ;
-(id)createObjectFromRepresentationConformingToType:(id)arg1 data:(id)arg2 URL:(id)arg3 outError:(id*)arg4 ;
-(Class)theClass;
-(void)setTheClass:(Class)arg1 ;
-(NSMutableOrderedSet *)typeOrder;
-(void)setTypeOrder:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)blockByType;
-(void)setBlockByType:(NSMutableDictionary *)arg1 ;
@end

