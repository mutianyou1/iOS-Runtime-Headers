/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIActivityIndicatorView, UILabel;

@interface HRContentStatusCell : UITableViewCell {

	 spinner;
	 titleLabel;

}

@property (readonly,nonatomic) UIActivityIndicatorView * spinner; 
@property (readonly,nonatomic) UILabel * titleLabel; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)titleLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
@end

