/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol EDSearchableIndexSchedulable <NSObject>
@property (assign,getter=isDataSourceIndexingPermitted,nonatomic) BOOL dataSourceIndexingPermitted; 
@property (getter=isPluggedIn,nonatomic,readonly) BOOL pluggedIn; 
@property (nonatomic,copy,readonly) NSString * indexName; 
@property (nonatomic,readonly) unsigned long long pendingIndexItemsCount; 
@required
-(NSString *)indexName;
-(BOOL)isPluggedIn;
-(unsigned long long)pendingIndexItemsCount;
-(BOOL)isDataSourceIndexingPermitted;
-(void)setDataSourceIndexingPermitted:(BOOL)arg1;

@end

