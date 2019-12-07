/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBUIBannerItem : NSObject
-(id)title;
-(unsigned long long)priority;
-(/*^block*/id)action;
-(id)message;
-(id)sound;
-(id)sortDate;
-(BOOL)isSticky;
-(id)subActions;
-(id)actionWithIdentifier:(id)arg1 ;
-(BOOL)shouldPlayLightsAndSirens;
-(BOOL)canShowInAssistant;
-(BOOL)canShowWhileLocked;
-(BOOL)shouldShowModalSubActions;
-(id)subActionLabels;
-(BOOL)hasSubActions;
-(id)defaultActionWithContext:(id)arg1 ;
-(id)lockScreenActionContextWithContext:(id)arg1 ;
@end
