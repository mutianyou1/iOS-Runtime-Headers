/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUTableViewController.h>

@interface SUReportConcernViewController : SUTableViewController {

	BOOL _animatingKeyboard;
	unsigned long long _itemIdentifier;
	UIEdgeInsets _originalTableInsets;

}

@property (nonatomic,readonly) unsigned long long itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
-(unsigned long long)itemIdentifier;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(id)initWithItemIdentifier:(unsigned long long)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)keyboardWillHideWithInfo:(id)arg1 ;
-(void)keyboardWillShowWithInfo:(id)arg1 ;
-(BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2 ;
-(void)_submit:(id)arg1 ;
-(void)_hideKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_showKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_fetchConcerns;
@end

