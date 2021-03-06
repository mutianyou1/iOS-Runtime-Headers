/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>

@protocol CACDictationRecognizerModeOverlayManagerDelegate;
@interface CACDictationRecognizerModeOverlayManager : CACSimpleContentViewManager {

	id<CACDictationRecognizerModeOverlayManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CACDictationRecognizerModeOverlayManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CACDictationRecognizerModeOverlayManagerDelegate>)delegate;
-(void)setDelegate:(id<CACDictationRecognizerModeOverlayManagerDelegate>)arg1 ;
-(BOOL)isOverlay;
-(void)showOverlayForDictiationRecognizerMode;
@end

