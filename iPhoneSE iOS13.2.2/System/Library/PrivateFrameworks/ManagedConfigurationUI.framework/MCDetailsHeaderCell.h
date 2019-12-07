/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class MCDetailsHeaderContentView;

@interface MCDetailsHeaderCell : UITableViewCell {

	MCDetailsHeaderContentView* _headerView;

}
-(void)setDelegate:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)layoutSubviews;
-(void)setOrganizationName:(id)arg1 ;
-(void)setGradientColor:(int)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 mode:(int)arg3 ;
-(void)setIsTrusted:(BOOL)arg1 ;
-(void)setIsSigned:(BOOL)arg1 ;
-(void)setHidesUntrustedLabel:(BOOL)arg1 ;
-(void)setUseTrustedNomenclature:(BOOL)arg1 ;
-(void)hideActionButton;
-(double)heightForTableView;
-(void)showActionButton;
-(void)setActionToRemove;
-(void)setIsExpired:(BOOL)arg1 ;
-(void)setActionToInstall;
@end
