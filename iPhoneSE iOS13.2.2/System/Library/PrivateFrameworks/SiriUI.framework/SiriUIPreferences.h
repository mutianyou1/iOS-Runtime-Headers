/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface SiriUIPreferences : NSObject {

	NSUserDefaults* _userDefaults;
	long long _numberOfTimesSiriCardShown;
	BOOL _voiceRequestMadeWhileInCarDND;

}
+(id)sharedPreferences;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setVoiceRequestMadeWhileInCarDND:(BOOL)arg1 ;
-(BOOL)voiceRequestMadeWhileInCarDND;
-(long long)numberOfTimesCarDNDSiriCardShown;
-(void)setNumberOfTimesCarDNDSiriCardShown:(long long)arg1 ;
@end

