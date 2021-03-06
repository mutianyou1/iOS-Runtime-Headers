/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/MTSingleton.h>
#import <libobjc.A.dylib/NSManagedObjectContextProvider.h>

@class MTCoreDataContainer, MTDBConfig, NSString;

@interface MTDB : MTSingleton <NSManagedObjectContextProvider> {

	MTCoreDataContainer* _coreDataContainer;
	MTDBConfig* _config;

}

@property (nonatomic,retain) MTCoreDataContainer * coreDataContainer;              //@synthesize coreDataContainer=_coreDataContainer - In the implementation block
@property (nonatomic,retain) MTDBConfig * config;                                  //@synthesize config=_config - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)libraryPath;
+(BOOL)isCorrupt;
+(id)fetchManagedObjectModelFromDisk;
+(long long)libraryDataVersion;
+(BOOL)canExtensionOpenDatabase;
+(id)libraryShmPath;
+(id)libraryWalPath;
+(long long)coreDataVersion;
-(id)init;
-(MTDBConfig *)config;
-(void)setConfig:(MTDBConfig *)arg1 ;
-(id)managedObjectModel;
-(id)importContext;
-(id)mainQueueContext;
-(id)privateQueueContext;
-(id)mainOrPrivateContext;
-(id)carPlayContext;
-(id)storeContext;
-(id)resetableImportContext;
-(id)persistentStoreUuid;
-(void)addChangeNotifier:(id)arg1 ;
-(void)removeChangeNotifier:(id)arg1 ;
-(void)setCoreDataContainer:(MTCoreDataContainer *)arg1 ;
-(MTCoreDataContainer *)coreDataContainer;
@end

