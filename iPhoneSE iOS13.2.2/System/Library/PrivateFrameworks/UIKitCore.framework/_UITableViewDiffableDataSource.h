/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UITableView;

@interface _UITableViewDiffableDataSource : _UIDiffableDataSourceSnapshotter {

	long long _defaultRowAnimation;

}

@property (assign,nonatomic) long long defaultRowAnimation;                 //@synthesize defaultRowAnimation=_defaultRowAnimation - In the implementation block
@property (nonatomic,__weak,readonly) UITableView * tableView; 
-(UITableView *)tableView;
-(id)initWithTableView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(long long)defaultRowAnimation;
-(void)setDefaultRowAnimation:(long long)arg1 ;
-(id)initWithTableView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
@end

