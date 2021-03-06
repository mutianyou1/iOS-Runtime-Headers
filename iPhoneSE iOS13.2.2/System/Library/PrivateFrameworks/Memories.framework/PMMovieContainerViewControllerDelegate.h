/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PMMovieContainerViewControllerDelegate <NSObject>
@optional
-(void)playerDidPlayToEnd;
-(void)playerProgressDidChange:(SCD_Struct_PM5)arg1;
-(void)toggleControlVisibility;
-(void)airPlayDidStart;
-(void)setAirPlayIsAvailable:(BOOL)arg1;
-(void)playerRateChanged;
-(void)playerReadyForDisplay;
-(void)playerDidDoContentChange;
-(void)playerWillDoContentChange;
-(void)playerWillRefreshMovie;
-(void)playerContentChangeFailed;
-(void)playerDidGenerateNewPosters;
-(void)playerNotReadyForDisplay;

@required
-(void)airPlayDidEnd;

@end

