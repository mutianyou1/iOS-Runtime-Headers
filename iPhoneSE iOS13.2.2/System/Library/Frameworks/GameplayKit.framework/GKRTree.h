/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKRTree : NSObject {

	GKCRTree<NSObject, float __attribute__((ext_vector_type(2)))>* _cRTree;
	unsigned long long _queryReserve;

}

@property (assign) unsigned long long queryReserve;              //@synthesize queryReserve=_queryReserve - In the implementation block
+(id)treeWithMaxNumberOfChildren:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithMaxNumberOfChildren:(unsigned long long)arg1 ;
-(void)setQueryReserve:(unsigned long long)arg1 ;
-(unsigned long long)queryReserve;
-(void)addElement:(id)arg1 boundingRectMin:(long long)arg2 ;
-(void)removeElement:(id)arg1 ;
-(id)elementsInBoundingRectMin:rectMax:;
@end
