/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHTokenizedTextResultColumn.h>

@class NSArray;

@interface CHMutableTokenizedTextResultColumn : CHTokenizedTextResultColumn

@property (nonatomic,copy) NSArray * tokenRows; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTokenRows:(id)arg1 ;
-(long long)addTokenRowWithTokens:(id)arg1 ;
-(void)sortTokenRows;
-(id)_mutableTokenRows;
-(void)setTokenRows:(NSArray *)arg1 ;
-(void)removeTokenRowAtIndex:(long long)arg1 ;
@end

