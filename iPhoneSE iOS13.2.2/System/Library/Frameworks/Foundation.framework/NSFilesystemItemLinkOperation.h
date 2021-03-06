/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFilesystemItemCopyOperation.h>

@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation
+(id)filesystemItemLinkOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
+(BOOL)_needsStatInfo;
+(id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(BOOL)_validatePaths:(id*)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(BOOL)shouldProceedAfterError:(id)arg1 linkingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)shouldLinkItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)_shouldLinkItemAtPath:(const char*)arg1 toPath:(const char*)arg2 ;
-(BOOL)_shouldProceedAfterErrno:(int)arg1 linkingItemAtPath:(const char*)arg2 toPath:(const char*)arg3 ;
@end

