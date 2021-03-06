/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFItemManagerDelegate <NSObject>
@optional
-(void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2;
-(void)itemManager:(id)arg1 didUpdateItemModules:(id)arg2;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned long long)arg2;
-(id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
-(void)itemManagerDidFinishUpdate:(id)arg1;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
-(void)itemManager:(id)arg1 didRemoveSections:(id)arg2;
-(void)itemManager:(id)arg1 didInsertSections:(id)arg2;
-(void)itemManager:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;

@end

