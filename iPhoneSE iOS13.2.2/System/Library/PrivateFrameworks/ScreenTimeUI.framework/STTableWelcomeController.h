/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/ScreenTimeUI-Structs.h>
#import <OnBoardingKit/OBTableWelcomeController.h>

@class UITableViewController, NSLayoutConstraint;

@interface STTableWelcomeController : OBTableWelcomeController {

	UITableViewController* _tableViewController;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                    //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) UITableViewController * tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTableView:(id)arg1 ;
-(UITableViewController *)tableViewController;
-(void)setTableViewController:(UITableViewController *)arg1 ;
-(void)_contentSizeDidChangeFrom:(CGSize)arg1 to:(CGSize)arg2 ;
@end
