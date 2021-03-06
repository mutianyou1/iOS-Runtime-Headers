/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView, UIActivityIndicatorView, UIButton;

@interface EKUILocationEditItemCell : UITableViewCell {

	UILabel* _title;
	UIImageView* _image;
	UIActivityIndicatorView* _spinner;
	UIButton* _clearButton;
	/*^block*/id _clearButtonTapped;

}

@property (nonatomic,copy) id clearButtonTapped;              //@synthesize clearButtonTapped=_clearButtonTapped - In the implementation block
-(id)description;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_clearButtonTapped:(id)arg1 ;
-(id)clearButtonTapped;
-(void)updateWithName:(id)arg1 sourceSupportsAvailability:(BOOL)arg2 availabilityRequestInProgress:(BOOL)arg3 availabilityType:(long long)arg4 ;
-(void)setClearButtonTapped:(id)arg1 ;
@end

