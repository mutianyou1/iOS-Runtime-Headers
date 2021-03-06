/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGCurationTrait.h>

@class NSSet;

@interface PGCurationSetTrait : PGCurationTrait {

	NSSet* _items;
	NSSet* _negativeItems;

}

@property (nonatomic,readonly) NSSet * items;                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSSet * negativeItems;              //@synthesize negativeItems=_negativeItems - In the implementation block
-(id)debugDescription;
-(BOOL)isActive;
-(NSSet *)items;
-(id)initWithItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 negativeItems:(id)arg2 ;
-(NSSet *)negativeItems;
@end

