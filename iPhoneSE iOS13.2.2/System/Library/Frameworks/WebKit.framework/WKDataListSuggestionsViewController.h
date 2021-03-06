/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class WKDataListSuggestionsControl;

@interface WKDataListSuggestionsViewController : UITableViewController {

	WKDataListSuggestionsControl* _control;

}

@property (assign,nonatomic,__weak) WKDataListSuggestionsControl * control;              //@synthesize control=_control - In the implementation block
-(void)reloadData;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setControl:(WKDataListSuggestionsControl *)arg1 ;
-(WKDataListSuggestionsControl *)control;
@end

