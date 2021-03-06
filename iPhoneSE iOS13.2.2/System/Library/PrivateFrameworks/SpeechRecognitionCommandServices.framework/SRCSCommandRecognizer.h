/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, SRCSCommandRecognitionSystem;

@interface SRCSCommandRecognizer : NSObject {

	NSArray* _spokenCommands;
	SRCSCommandRecognitionSystem* _commandRecognitionSystem;
	BOOL _active;

}

@property (assign) BOOL active;              //@synthesize active=_active - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(id)spokenCommands;
-(id)commandRecognitionSystem;
-(id)initWithCommandRecognitionSystem:(id)arg1 commandIdentifiers:(id)arg2 ;
-(id)initWithCommandRecognitionSystem:(id)arg1 spokenCommands:(id)arg2 ;
@end

