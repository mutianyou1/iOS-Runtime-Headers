/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKStackView.h>

@class TLKLabel, NSMutableArray;

@interface TLKContentsView : TLKStackView {

	TLKLabel* _titleLabel;
	NSMutableArray* _detailsLabels;

}

@property (nonatomic,retain) TLKLabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * detailsLabels;              //@synthesize detailsLabels=_detailsLabels - In the implementation block
+(id)detailsLabel;
-(id)init;
-(TLKLabel *)titleLabel;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(NSMutableArray *)detailsLabels;
-(void)updateWithTitle:(id)arg1 contents:(id)arg2 ;
-(void)setDetailsLabels:(NSMutableArray *)arg1 ;
@end

