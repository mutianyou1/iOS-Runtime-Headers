/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROBrailleDisplayCommandDispatcherProtocol <NSObject>
@property (assign,nonatomic,__weak) id<SCROBrailleDisplayCommandDispatcherDelegate> delegate; 
@required
-(id<SCROBrailleDisplayCommandDispatcherDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)handleBrailleKeyEvent:(id)arg1;

@end
