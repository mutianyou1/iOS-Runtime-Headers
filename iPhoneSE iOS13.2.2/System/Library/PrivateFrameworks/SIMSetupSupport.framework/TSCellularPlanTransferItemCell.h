/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface TSCellularPlanTransferItemCell : UITableViewCell {

	UILabel* _title;
	UILabel* _planInfo;

}

@property (retain) UILabel * title;                 //@synthesize title=_title - In the implementation block
@property (retain) UILabel * planInfo;              //@synthesize planInfo=_planInfo - In the implementation block
-(UILabel *)title;
-(void)setTitle:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)planInfo;
-(void)setPlanInfo:(UILabel *)arg1 ;
@end
