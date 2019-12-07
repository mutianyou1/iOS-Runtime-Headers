/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <libobjc.A.dylib/_SFPasswordIconControllerDelegate.h>

@class _SFPasswordIconController, NSCountedSet, UISearchController, NSString;

@interface _SFPasswordTableViewController : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating, _SFPasswordIconControllerDelegate> {

	_SFPasswordIconController* _iconController;
	NSCountedSet* _visibleDomains;
	UISearchController* _searchController;
	NSString* _searchPattern;

}

@property (nonatomic,readonly) NSString * searchPattern;              //@synthesize searchPattern=_searchPattern - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)positionForBar:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)_updateIconForDomain:(id)arg1 forCell:(id)arg2 ;
-(void)searchPatternDidUpdate;
-(void)iconDidUpdateForDomain:(id)arg1 iconController:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 siteMetadataManager:(id)arg2 configuration:(id)arg3 ;
-(NSString *)searchPattern;
@end
