/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface HKViewTableViewCell : UITableViewCell {

	UIView* _hostedView;

}

@property (nonatomic,readonly) UIView * hostedView;              //@synthesize hostedView=_hostedView - In the implementation block
-(void)prepareForReuse;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHostedView:(UIView *)arg1 ;
-(UIView *)hostedView;
-(void)_pinViewToContent:(id)arg1 ;
@end

