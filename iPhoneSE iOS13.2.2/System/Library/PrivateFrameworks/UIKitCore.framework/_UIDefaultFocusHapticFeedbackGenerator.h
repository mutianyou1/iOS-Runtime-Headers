/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIFocusHapticFeedbackGenerator.h>

@class CARSessionStatus, CARInputDeviceTouchpad, NSString;

@interface _UIDefaultFocusHapticFeedbackGenerator : NSObject <_UIFocusHapticFeedbackGenerator> {

	CARSessionStatus* _sessionStatus;
	CARInputDeviceTouchpad* _currentTouchpad;
	unsigned long long _currentSenderID;

}

@property (nonatomic,retain) CARSessionStatus * sessionStatus;                      //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (nonatomic,retain) CARInputDeviceTouchpad * currentTouchpad;              //@synthesize currentTouchpad=_currentTouchpad - In the implementation block
@property (assign,nonatomic) unsigned long long currentSenderID;                    //@synthesize currentSenderID=_currentSenderID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CARSessionStatus *)sessionStatus;
-(void)performHapticFeedbackForFocusUpdateInContext:(id)arg1 ;
-(unsigned long long)currentSenderID;
-(void)setSessionStatus:(CARSessionStatus *)arg1 ;
-(CARInputDeviceTouchpad *)currentTouchpad;
-(void)setCurrentTouchpad:(CARInputDeviceTouchpad *)arg1 ;
-(void)setCurrentSenderID:(unsigned long long)arg1 ;
@end
