/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaBridgeUI/NanoMediaBridgeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol NMBUIOnboardingDataSource;
@class UILabel, NMBUIConfigurationButton, UITableView, NSString;

@interface NMBUIConfigurationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id<NMBUIOnboardingDataSource> _dataSource;
	UILabel* _titleLabel;
	UILabel* _headerDescriptionLabel;
	UILabel* _footerDescriptionLabel;
	NMBUIConfigurationButton* _confirmButton;
	UITableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_dismiss;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)_presentInstructionViewController;
@end

