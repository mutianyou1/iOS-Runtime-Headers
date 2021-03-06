/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MPVolumeControllerDataSource <NSObject>
@property (assign,nonatomic,__weak) id<MPVolumeControllerDataSourceDelegate> delegate; 
@property (nonatomic,readonly) BOOL applicationShouldOverrideHardwareVolumeBehavior; 
@property (nonatomic,copy,readonly) NSString * volumeControlLabel; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (assign,nonatomic) float volume; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (nonatomic,readonly) long long volumeWarningState; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@optional
-(void)reloadWarning;
-(void)beginIncreasingRelativeVolume;
-(void)endIncreasingRelativeVolume;
-(void)beginDecreasingRelativeVolume;
-(void)endDecreasingRelativeVolume;

@required
-(id<MPVolumeControllerDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)reload;
-(float)volume;
-(void)setVolume:(float)arg1;
-(void)setMuted:(BOOL)arg1;
-(BOOL)isMuted;
-(NSString *)volumeControlLabel;
-(void)adjustVolumeValue:(float)arg1;
-(void)initializeVolume;
-(void)getVolumeValueWithCompletion:(/*^block*/id)arg1;
-(BOOL)applicationShouldOverrideHardwareVolumeBehavior;
-(BOOL)isVolumeControlAvailable;
-(BOOL)volumeWarningEnabled;
-(long long)volumeWarningState;
-(float)EUVolumeLimit;

@end

