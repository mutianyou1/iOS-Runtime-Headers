/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLBinaryIndex;

@interface NSSQLIndexIntermediate : NSSQLIntermediate {

	NSSQLBinaryIndex* _index;
	BOOL _isHandlingExpressions;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isIndexScoped;
-(id)initForIndex:(id)arg1 withScope:(id)arg2 ;
-(BOOL)isIndexExpressionScoped;
-(id)governingEntity;
-(id)_generateSQLForExpressionDescription:(id)arg1 inContext:(id)arg2 ;
@end

