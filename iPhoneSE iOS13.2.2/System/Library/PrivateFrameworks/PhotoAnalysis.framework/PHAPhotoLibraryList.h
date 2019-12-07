/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject {

	NSMutableDictionary* _photoLibrariesByPath;

}

@property (retain) NSMutableDictionary * photoLibrariesByPath;              //@synthesize photoLibrariesByPath=_photoLibrariesByPath - In the implementation block
@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)saveToPersistentStorage;
-(void)addPhotoLibraryAtURL:(id)arg1 ;
-(void)removePhotoLibraryAtURL:(id)arg1 ;
-(void)removeAllPhotoLibraries;
-(void)enumeratePhotoLibrariesWithBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)photoLibrariesByPath;
-(void)setPhotoLibrariesByPath:(NSMutableDictionary *)arg1 ;
@end
