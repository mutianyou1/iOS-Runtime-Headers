/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class HKSourceDataModel, UIImageView, UILabel;

@interface WDSourcesListTableViewCell : UITableViewCell {

	HKSourceDataModel* _sourceModel;
	UIImageView* _iconImage;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImageView * iconImage;                      //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HKSourceDataModel * sourceModel;              //@synthesize sourceModel=_sourceModel - In the implementation block
+(id)defaultReuseIdentifier;
-(void)prepareForReuse;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)iconImage;
-(HKSourceDataModel *)sourceModel;
-(void)setSourceModel:(HKSourceDataModel *)arg1 ;
-(void)setupConstraints;
-(void)setIconImage:(UIImageView *)arg1 ;
-(void)setUpSubviews;
@end

