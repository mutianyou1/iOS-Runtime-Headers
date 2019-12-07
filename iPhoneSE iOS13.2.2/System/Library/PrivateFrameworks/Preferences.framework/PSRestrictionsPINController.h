/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/DevicePINController.h>

@interface PSRestrictionsPINController : DevicePINController
+(BOOL)settingEnabled;
-(id)init;
-(id)title;
-(CFStringRef)defaultsID;
-(BOOL)validatePIN:(id)arg1 ;
-(BOOL)isNumericPIN;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(id)stringsBundle;
-(BOOL)simplePIN;
-(int)pinLength;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)setPIN:(id)arg1 ;
-(id)pinInstructionsPrompt;
-(id)pinInstructionsPromptFont;
@end
