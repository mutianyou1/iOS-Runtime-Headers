/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUIInteractionForwardingView.h>

@protocol SBUIPasscodeBiometricAuthenticationViewLayoutDelegate, SBUIPasscodeBiometricAuthenticationViewDelegate;
@class NSString, SBUIButton, SBUIPasscodePillButton, PKGlyphView, UIButton, UILabel, UILayoutGuide, NSLayoutConstraint;

@interface SBUIPasscodeBiometricAuthenticationView : SBUIInteractionForwardingView {

	BOOL _ancillaryButtonsVisible;
	BOOL _faceIDUsePasscodeButtonVisible;
	unsigned long long _type;
	id<SBUIPasscodeBiometricAuthenticationViewLayoutDelegate> _layoutDelegate;
	id<SBUIPasscodeBiometricAuthenticationViewDelegate> _delegate;
	NSString* _unlockDestination;
	NSString* _touchIDReason;
	NSString* _faceIDReason;
	NSString* _faceIDReasonLine2;
	SBUIButton* _touchIDUsePasscodeButton;
	SBUIPasscodePillButton* _faceIDUsePasscodeButton;
	PKGlyphView* _touchIDGlyphView;
	SBUIButton* _emergencyCallButton;
	SBUIButton* _cancelButton;
	UIButton* _backgroundCancelButton;
	UIButton* _invisibleUsePasscodeButton;
	UILabel* _touchIDReasonLabel;
	UILabel* _faceIDLabel;
	UILabel* _faceIDReasonLabel;
	UILayoutGuide* _faceIDLabelAndReasonHelperGuide;
	UILayoutGuide* _faceIDLabelAndReasonLayoutGuide;
	NSLayoutConstraint* _faceIDLabelFaceIDReasonBaselineConstraint;

}

@property (setter=_setTouchIDReason:,nonatomic,copy) NSString * touchIDReason;                                             //@synthesize touchIDReason=_touchIDReason - In the implementation block
@property (setter=_setFaceIDReason:,nonatomic,copy) NSString * faceIDReason;                                               //@synthesize faceIDReason=_faceIDReason - In the implementation block
@property (setter=_setFaceIDReason2:,nonatomic,copy) NSString * faceIDReasonLine2;                                         //@synthesize faceIDReasonLine2=_faceIDReasonLine2 - In the implementation block
@property (nonatomic,retain) SBUIButton * touchIDUsePasscodeButton;                                                        //@synthesize touchIDUsePasscodeButton=_touchIDUsePasscodeButton - In the implementation block
@property (nonatomic,retain) SBUIPasscodePillButton * faceIDUsePasscodeButton;                                             //@synthesize faceIDUsePasscodeButton=_faceIDUsePasscodeButton - In the implementation block
@property (nonatomic,retain) PKGlyphView * touchIDGlyphView;                                                               //@synthesize touchIDGlyphView=_touchIDGlyphView - In the implementation block
@property (nonatomic,retain) SBUIButton * emergencyCallButton;                                                             //@synthesize emergencyCallButton=_emergencyCallButton - In the implementation block
@property (nonatomic,retain) SBUIButton * cancelButton;                                                                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * backgroundCancelButton;                                                            //@synthesize backgroundCancelButton=_backgroundCancelButton - In the implementation block
@property (nonatomic,retain) UIButton * invisibleUsePasscodeButton;                                                        //@synthesize invisibleUsePasscodeButton=_invisibleUsePasscodeButton - In the implementation block
@property (nonatomic,retain) UILabel * touchIDReasonLabel;                                                                 //@synthesize touchIDReasonLabel=_touchIDReasonLabel - In the implementation block
@property (nonatomic,retain) UILabel * faceIDLabel;                                                                        //@synthesize faceIDLabel=_faceIDLabel - In the implementation block
@property (nonatomic,retain) UILabel * faceIDReasonLabel;                                                                  //@synthesize faceIDReasonLabel=_faceIDReasonLabel - In the implementation block
@property (nonatomic,retain) UILayoutGuide * faceIDLabelAndReasonHelperGuide;                                              //@synthesize faceIDLabelAndReasonHelperGuide=_faceIDLabelAndReasonHelperGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * faceIDLabelAndReasonLayoutGuide;                                              //@synthesize faceIDLabelAndReasonLayoutGuide=_faceIDLabelAndReasonLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * faceIDLabelFaceIDReasonBaselineConstraint;                               //@synthesize faceIDLabelFaceIDReasonBaselineConstraint=_faceIDLabelFaceIDReasonBaselineConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIPasscodeBiometricAuthenticationViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIPasscodeBiometricAuthenticationViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * unlockDestination;                                                                   //@synthesize unlockDestination=_unlockDestination - In the implementation block
@property (assign,nonatomic) BOOL showsEmergencyCallButton; 
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (assign,nonatomic) BOOL ancillaryButtonsVisible;                                                                 //@synthesize ancillaryButtonsVisible=_ancillaryButtonsVisible - In the implementation block
@property (assign,nonatomic) BOOL faceIDUsePasscodeButtonVisible;                                                          //@synthesize faceIDUsePasscodeButtonVisible=_faceIDUsePasscodeButtonVisible - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id<SBUIPasscodeBiometricAuthenticationViewDelegate>)delegate;
-(void)setDelegate:(id<SBUIPasscodeBiometricAuthenticationViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_updateSubviews;
-(BOOL)showsCancelButton;
-(SBUIButton *)cancelButton;
-(void)setCancelButton:(SBUIButton *)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)_updateConstraints;
-(void)setLayoutDelegate:(id<SBUIPasscodeBiometricAuthenticationViewLayoutDelegate>)arg1 ;
-(id<SBUIPasscodeBiometricAuthenticationViewLayoutDelegate>)layoutDelegate;
-(NSString *)unlockDestination;
-(void)setUnlockDestination:(NSString *)arg1 ;
-(void)_noteContentSizeCategoryDidChange;
-(void)_layoutAuthReasonLabel:(id)arg1 ;
-(void)_setTouchIDReason:(id)arg1 ;
-(void)_setFaceIDReason:(id)arg1 ;
-(void)_setFaceIDReasonLine2:(id)arg1 ;
-(void)setAncillaryButtonsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_cancelButtonHit;
-(void)_usePasscodeButtonHit;
-(void)_emergencyCallButtonHit;
-(double)_leadingForFaceIDReason;
-(id)initWithFrame:(CGRect)arg1 layoutDelegate:(id)arg2 ;
-(BOOL)showsEmergencyCallButton;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)setAncillaryButtonsVisible:(BOOL)arg1 ;
-(void)setFaceIDUsePasscodeButtonVisible:(BOOL)arg1 ;
-(void)setGlyphViewState:(long long)arg1 ;
-(void)setGlyphViewState:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)ancillaryButtonsVisible;
-(BOOL)faceIDUsePasscodeButtonVisible;
-(NSString *)touchIDReason;
-(NSString *)faceIDReason;
-(NSString *)faceIDReasonLine2;
-(void)_setFaceIDReason2:(id)arg1 ;
-(SBUIButton *)touchIDUsePasscodeButton;
-(void)setTouchIDUsePasscodeButton:(SBUIButton *)arg1 ;
-(SBUIPasscodePillButton *)faceIDUsePasscodeButton;
-(void)setFaceIDUsePasscodeButton:(SBUIPasscodePillButton *)arg1 ;
-(PKGlyphView *)touchIDGlyphView;
-(void)setTouchIDGlyphView:(PKGlyphView *)arg1 ;
-(SBUIButton *)emergencyCallButton;
-(void)setEmergencyCallButton:(SBUIButton *)arg1 ;
-(UIButton *)backgroundCancelButton;
-(void)setBackgroundCancelButton:(UIButton *)arg1 ;
-(UIButton *)invisibleUsePasscodeButton;
-(void)setInvisibleUsePasscodeButton:(UIButton *)arg1 ;
-(UILabel *)touchIDReasonLabel;
-(void)setTouchIDReasonLabel:(UILabel *)arg1 ;
-(UILabel *)faceIDLabel;
-(void)setFaceIDLabel:(UILabel *)arg1 ;
-(UILabel *)faceIDReasonLabel;
-(void)setFaceIDReasonLabel:(UILabel *)arg1 ;
-(UILayoutGuide *)faceIDLabelAndReasonHelperGuide;
-(void)setFaceIDLabelAndReasonHelperGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)faceIDLabelAndReasonLayoutGuide;
-(void)setFaceIDLabelAndReasonLayoutGuide:(UILayoutGuide *)arg1 ;
-(NSLayoutConstraint *)faceIDLabelFaceIDReasonBaselineConstraint;
-(void)setFaceIDLabelFaceIDReasonBaselineConstraint:(NSLayoutConstraint *)arg1 ;
@end
