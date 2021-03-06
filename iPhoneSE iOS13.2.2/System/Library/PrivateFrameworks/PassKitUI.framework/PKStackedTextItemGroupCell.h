/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class PKStackedTextItemGroupView, PKStackedTextItemGroup;

@interface PKStackedTextItemGroupCell : PKTableViewCell {

	PKStackedTextItemGroupView* _groupView;
	long long _style;
	BOOL _animated;

}

@property (nonatomic,retain) PKStackedTextItemGroup * content; 
-(void)prepareForReuse;
-(PKStackedTextItemGroup *)content;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContent:(PKStackedTextItemGroup *)arg1 ;
-(CGRect)_separatorFrame;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)setContent:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithGroupViewStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

