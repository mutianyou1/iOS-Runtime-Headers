/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKDetailsCell.h>

@class UILabel, UIImageView;

@interface CKDetailsAddMemberCell : CKDetailsCell {

	UILabel* _addLabel;
	UIImageView* _addIcon;

}

@property (nonatomic,retain) UILabel * addLabel;                 //@synthesize addLabel=_addLabel - In the implementation block
@property (nonatomic,retain) UIImageView * addIcon;              //@synthesize addIcon=_addIcon - In the implementation block
+(double)preferredHeight;
+(id)reuseIdentifier;
+(Class)cellClass;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)addIcon;
-(UILabel *)addLabel;
-(void)setAddLabel:(UILabel *)arg1 ;
-(void)setAddIcon:(UIImageView *)arg1 ;
@end
