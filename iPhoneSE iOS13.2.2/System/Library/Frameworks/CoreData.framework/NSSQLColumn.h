/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLProperty.h>

@class NSString;

@interface NSSQLColumn : NSSQLProperty {

	NSString* _columnName;

}
-(void)dealloc;
-(id)description;
-(id)columnName;
-(unsigned char)sqlType;
-(unsigned)slot;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setSQLType:(unsigned char)arg1 ;
-(id)initForReadOnlyFetching;
-(void)setAllowAliasing:(BOOL)arg1 ;
-(void)_setColumnName:(id)arg1 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(BOOL)allowAliasing;
-(id)initWithColumnName:(id)arg1 sqlType:(unsigned char)arg2 ;
-(unsigned)roughSizeEstimate;
-(unsigned)fetchIndex;
-(void)_setFetchIndex:(unsigned)arg1 ;
-(void)_setSlotIfDefault:(unsigned)arg1 ;
-(id)cloneForReadOnlyFetching;
@end

