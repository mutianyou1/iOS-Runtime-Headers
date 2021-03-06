/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, NSArray;


@protocol REDataSourceManagerProperties <REExportedInterface>
@property (nonatomic,readonly) NSSet * disabledDataSources; 
@property (readonly) NSSet * availableDataSourceIdentifiers; 
@property (readonly) NSSet * currentDataSourceIdentifiers; 
@property (readonly) NSArray * currentDataSources; 
@property (nonatomic,readonly) NSArray * dataSourceControllers; 
@required
-(NSSet *)availableDataSourceIdentifiers;
-(NSArray *)currentDataSources;
-(NSSet *)currentDataSourceIdentifiers;
-(NSSet *)disabledDataSources;
-(NSArray *)dataSourceControllers;

@end

