/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class OITSULinkedPointerSetEntry;

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {

	CFDictionaryRef mDictionary;
	OITSULinkedPointerSetEntry* mHead;
	OITSULinkedPointerSetEntry* mTail;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)array;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_OI17*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 ;
-(id)firstObject;
-(id)reverseObjectEnumerator;
-(id)objectEnumeratorAfterObject:(id)arg1 ;
-(BOOL)hasObjects;
-(void)insertFirstObject:(id)arg1 ;
@end

