/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface NMSGreenTeaStreamingDefaults : NSObject {

	NSUserDefaults* _sharedDefaults;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)_boolForKey:(id)arg1 ;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)greenTeaMusicIsMirroringStreamingSettings;
-(void)setGreenTeaMusicIsMirroringStreamingSettings:(BOOL)arg1 ;
-(BOOL)greenTeaMusicAllowCellularForStreaming;
-(void)setGreenTeaMusicAllowCellularForStreaming:(BOOL)arg1 ;
-(BOOL)greenTeaMusicAllowCellularForHighQualityStreaming;
-(void)setGreenTeaMusicAllowCellularForHighQualityStreaming:(BOOL)arg1 ;
@end

