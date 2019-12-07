/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysMappingStrategy.h>

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {

	int _cd_rc;
	int _reserved64;
	void* _table;
	unsigned long long _length;
	id _reserved1;
	id* _keys;

}
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
-(unsigned long long)retainCount;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(id)description;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(unsigned long long)indexForKey:(id)arg1 ;
-(id*)keys;
-(Class)classForArchiver;
-(id)initForKeys:(id)arg1 ;
-(id)initForKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)fastIndexForKnownKey:(id)arg1 ;
-(CFArrayRef)_makeBranchTableForKeys:(const char**)arg1 count:(unsigned long long)arg2 ;
-(void)_coreCreationForKeys:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)_coreDealloc:(BOOL)arg1 ;
@end
