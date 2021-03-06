/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol _WGDataSourceManager <NSObject>
@property (assign,nonatomic) id<_WGParentDataSourceManager> parentDataSourceManager; 
@property (nonatomic,readonly) NSArray * dataSources; 
@required
-(NSArray *)dataSources;
-(void)_start:(/*^block*/id)arg1;
-(void)_stop:(/*^block*/id)arg1;
-(id<_WGParentDataSourceManager>)parentDataSourceManager;
-(void)setParentDataSourceManager:(id)arg1;

@end

