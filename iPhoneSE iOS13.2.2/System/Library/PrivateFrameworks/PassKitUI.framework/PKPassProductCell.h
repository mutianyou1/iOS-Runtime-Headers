/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/PKAccessibleLayoutSupport.h>

@protocol PKAccessibleLayoutObserverDelegate;
@class UILabel, PKContinuousButton, PKPaymentPassAction, PKPaymentPass, PKPaymentBalance;

@interface PKPassProductCell : UITableViewCell <PKAccessibleLayoutSupport> {

	UILabel* _titleView;
	UILabel* _detailView;
	PKContinuousButton* _actionButton;
	PKPaymentPassAction* _action;
	double _topPadding;
	double _middlePadding;
	id<PKAccessibleLayoutObserverDelegate> _accessibleLayoutObserverDelegate;
	long long _accessibleLayout;
	PKPaymentPass* _pass;
	PKPaymentBalance* _balance;
	/*^block*/id _actionHandler;

}

@property (assign,nonatomic,__weak) id<PKAccessibleLayoutObserverDelegate> accessibleLayoutObserverDelegate;              //@synthesize accessibleLayoutObserverDelegate=_accessibleLayoutObserverDelegate - In the implementation block
@property (assign,nonatomic) long long accessibleLayout;                                                                  //@synthesize accessibleLayout=_accessibleLayout - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                                                                        //@synthesize pass=_pass - In the implementation block
@property (nonatomic,copy) PKPaymentBalance * balance;                                                                    //@synthesize balance=_balance - In the implementation block
@property (nonatomic,retain) PKPaymentPassAction * action;                                                                //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id actionHandler;                                                                              //@synthesize actionHandler=_actionHandler - In the implementation block
-(void)prepareForReuse;
-(PKPaymentPassAction *)action;
-(void)setBackgroundColor:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setAction:(PKPaymentPassAction *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(PKPaymentBalance *)balance;
-(void)setBalance:(PKPaymentBalance *)arg1 ;
-(void)_actionButtonTapped:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)_updateContent;
-(void)setAccessibleLayoutObserverDelegate:(id<PKAccessibleLayoutObserverDelegate>)arg1 ;
-(void)setAccessibleLayout:(long long)arg1 ;
-(void)_applyStyles;
-(id<PKAccessibleLayoutObserverDelegate>)accessibleLayoutObserverDelegate;
-(long long)accessibleLayout;
@end

