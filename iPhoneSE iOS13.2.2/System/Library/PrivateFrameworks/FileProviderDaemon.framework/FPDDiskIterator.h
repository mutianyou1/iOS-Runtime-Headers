/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
#import <FileProviderDaemon/FPDIterator.h>

@class NSURL, NSError;

@interface FPDDiskIterator : FPDIterator {

	NSURL* _rootURL;
	BOOL _stopAccessingRoot;
	BOOL _sentRoot;
	BOOL _lastItemWasPackage;
	BOOL _done;
	NSError* _error;
	unsigned long long _numFoldersPopped;
	CFURLEnumeratorRef _enumerator;

}
-(void)dealloc;
-(id)error;
-(BOOL)done;
-(BOOL)skipMaterializedTreeTraversal;
-(id)nextWithError:(id*)arg1 ;
-(unsigned long long)numFoldersPopped;
-(id)initWithURL:(id)arg1 isDirectory:(BOOL)arg2 ;
@end
