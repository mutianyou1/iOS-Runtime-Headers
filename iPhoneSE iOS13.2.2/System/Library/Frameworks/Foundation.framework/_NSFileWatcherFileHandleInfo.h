/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSFileWatcherFileHandleInfo : NSObject {

	int fileHandle;
	BOOL closed;

}

@property (readonly) BOOL isDirectory; 
+(id)openFileWithPath:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)close;
-(BOOL)isDirectory;
-(BOOL)verifyAccessByAuditToken:(SCD_Struct_NS0)arg1 ;
@end

