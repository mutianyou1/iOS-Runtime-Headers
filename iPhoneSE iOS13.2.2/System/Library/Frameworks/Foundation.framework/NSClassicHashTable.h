/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSHashTable.h>

@interface NSClassicHashTable : NSHashTable {

	SCD_Struct_NS23* _callBacks;
	CFBasicHashRef _ht;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copy;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)allObjects;
-(void*)getItem:(const void*)arg1 ;
-(void)removeItem:(const void*)arg1 ;
-(void)removeAllItems;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(void)insertItem:(const void*)arg1 ;
@end
