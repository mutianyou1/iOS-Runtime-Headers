/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIStackView, UIFont, NSLayoutConstraint, NSCalendar, UIImage, NSString, NSDateComponents, NSNumber;

@interface HKMedicalIDPersonSummaryCell : UITableViewCell {

	UIImageView* _pictureView;
	UILabel* _nameLabel;
	UILabel* _birthdateLabel;
	UILabel* _organDonationLabel;
	UIStackView* _mainContainerView;
	UIStackView* _labelContainerView;
	UIFont* _nameLabelFont;
	NSLayoutConstraint* _pictureWidthAnchor;
	NSCalendar* _gregorianCalendar;
	BOOL _resetFormatters;
	UIImage* _picture;
	NSString* _name;
	NSDateComponents* _gregorianBirthday;
	NSNumber* _organDonationStatus;

}

@property (nonatomic,retain) UIImage * picture;                                 //@synthesize picture=_picture - In the implementation block
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDateComponents * gregorianBirthday;              //@synthesize gregorianBirthday=_gregorianBirthday - In the implementation block
@property (nonatomic,retain) NSNumber * organDonationStatus;                    //@synthesize organDonationStatus=_organDonationStatus - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setPicture:(UIImage *)arg1 ;
-(UIImage *)picture;
-(void)localeDidChange:(id)arg1 ;
-(void)setGregorianBirthday:(NSDateComponents *)arg1 ;
-(NSDateComponents *)gregorianBirthday;
-(void)timeZoneDidChange:(id)arg1 ;
-(void)updateSubviewsFromData;
-(id)_cachedCalendar;
-(id)organDonorStringWithTemplate:(id)arg1 ;
-(id)notOrganDonorString;
-(NSNumber *)organDonationStatus;
-(void)setOrganDonationStatus:(NSNumber *)arg1 ;
@end

