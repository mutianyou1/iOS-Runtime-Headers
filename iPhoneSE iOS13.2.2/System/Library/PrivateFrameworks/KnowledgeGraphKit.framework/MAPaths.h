/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MAPaths : NSObject {

	NSMutableArray* _paths;

}
+(id)paths;
+(id)pathsWithPaths:(id)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(void)setPaths:(id)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(void)addPath:(id)arg1 ;
-(void)removeAllPaths;
-(id)graphRepresentationWithStrictNodes:(BOOL)arg1 strictEdges:(BOOL)arg2 ;
-(id)uniqueNodesForLabel:(id)arg1 ;
-(id)uniqueEdgesForLabel:(id)arg1 ;
@end

