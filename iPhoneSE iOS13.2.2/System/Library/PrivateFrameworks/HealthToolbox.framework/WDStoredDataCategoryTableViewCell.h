/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class HKDisplayCategory, HKDisplayType;

@interface WDStoredDataCategoryTableViewCell : UITableViewCell {

	HKDisplayCategory* _category;
	HKDisplayType* _displayType;

}

@property (retain) HKDisplayCategory * category;                       //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;              //@synthesize displayType=_displayType - In the implementation block
-(HKDisplayCategory *)category;
-(void)setCategory:(HKDisplayCategory *)arg1 ;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
@end

