/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator

@property (copy,readonly) NSDictionary * fileAttributes; 
@property (copy,readonly) NSDictionary * directoryAttributes; 
@property (readonly) BOOL isEnumeratingDirectoryPostOrder; 
@property (readonly) unsigned long long level; 
-(id)nextObject;
-(NSDictionary *)fileAttributes;
-(NSDictionary *)directoryAttributes;
-(unsigned long long)level;
-(void)skipDescendents;
-(void)skipDescendants;
-(BOOL)isEnumeratingDirectoryPostOrder;
@end

