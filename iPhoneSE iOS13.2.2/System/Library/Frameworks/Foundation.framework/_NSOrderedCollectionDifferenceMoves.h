/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _NSOrderedCollectionDifferenceMoves : NSObject {

	NSMutableDictionary* _removeDict;
	NSMutableDictionary* _insertDict;
	unsigned long long _firstRemove;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithChanges:(id)arg1 ;
-(unsigned long long)associatedIndexForChangeWithType:(long long)arg1 index:(unsigned long long)arg2 ;
@end

