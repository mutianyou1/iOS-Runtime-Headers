/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSManagedObjectID, NSString, CPLScopedIdentifier, NSDate;


@protocol PLCloudResourceCommon <NSObject>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,retain,readonly) NSString * assetUuid; 
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) unsigned long long sourceCplType; 
@property (assign,nonatomic) BOOL isAvailable; 
@property (nonatomic,readonly) BOOL isLocallyAvailable; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,retain,readonly) NSString * filePath; 
@property (nonatomic,retain,readonly) NSString * fingerprint; 
@property (nonatomic,retain,readonly) CPLScopedIdentifier * scopedIdentifier; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,retain,readonly) NSString * utiString; 
@property (nonatomic,readonly) unsigned resourceRecipeID; 
@property (assign,nonatomic) short cloudLocalState; 
@property (assign,nonatomic) short prefetchCount; 
@property (nonatomic,retain) NSDate * lastPrefetchDate; 
@property (nonatomic,retain) NSDate * lastOnDemandDownloadDate; 
@property (nonatomic,retain) NSDate * prunedAt; 
@required
-(unsigned long long)fileSize;
-(NSManagedObjectID *)objectID;
-(long long)width;
-(long long)height;
-(BOOL)isAvailable;
-(void)setIsAvailable:(BOOL)arg1;
-(NSString *)filePath;
-(unsigned long long)cplType;
-(NSString *)fingerprint;
-(id)cplResourceIncludeFile:(BOOL)arg1;
-(NSString *)assetUuid;
-(unsigned long long)sourceCplType;
-(BOOL)isLocallyAvailable;
-(CPLScopedIdentifier *)scopedIdentifier;
-(NSString *)utiString;
-(unsigned)resourceRecipeID;
-(short)cloudLocalState;
-(void)setCloudLocalState:(short)arg1;
-(short)prefetchCount;
-(void)setPrefetchCount:(short)arg1;
-(NSDate *)lastPrefetchDate;
-(void)setLastPrefetchDate:(id)arg1;
-(NSDate *)lastOnDemandDownloadDate;
-(void)setLastOnDemandDownloadDate:(id)arg1;
-(NSDate *)prunedAt;
-(void)setPrunedAt:(id)arg1;

@end
