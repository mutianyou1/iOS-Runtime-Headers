/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface OITSUMutablePointerSet : NSMutableSet {

	CFSetRef mSet;

}
+(Class)privateMutableClass;
+(Class)privateNonMutableClass;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)member:(id)arg1 ;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)removeAllObjects;
-(id)allObjects;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
-(id)setByAddingObject:(id)arg1 ;
-(id)initWithCFSet:(CFSetRef)arg1 ;
@end

