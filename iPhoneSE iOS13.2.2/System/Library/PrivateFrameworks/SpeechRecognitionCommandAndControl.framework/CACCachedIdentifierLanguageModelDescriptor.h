/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class CACLanguageModel;

@interface CACCachedIdentifierLanguageModelDescriptor : NSObject {

	RXLanguageObjectRef _rxLanguageObject;
	BOOL _isCurrent;
	CACLanguageModel* _languageModel;

}

@property (retain) CACLanguageModel * languageModel;              //@synthesize languageModel=_languageModel - In the implementation block
@property (assign) BOOL isCurrent;                                //@synthesize isCurrent=_isCurrent - In the implementation block
-(void)dealloc;
-(BOOL)isCurrent;
-(CACLanguageModel *)languageModel;
-(void)setLanguageModel:(CACLanguageModel *)arg1 ;
-(void)setIsCurrent:(BOOL)arg1 ;
-(RXLanguageObjectRef)rxLanguageObject;
-(void)setRxLanguageObject:(RXLanguageObjectRef)arg1 ;
@end

