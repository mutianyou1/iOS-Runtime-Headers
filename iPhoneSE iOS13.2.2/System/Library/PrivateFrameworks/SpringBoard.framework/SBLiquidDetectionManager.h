/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBLiquidDetectionManager : NSObject {

	int _wetToken;
	BOOL _finishedInit;
	BOOL _detectionEnabled;
	BOOL _accessoryPortWet;

}

@property (getter=isAccessoryPortWet,nonatomic,readonly) BOOL accessoryPortWet;              //@synthesize accessoryPortWet=_accessoryPortWet - In the implementation block
@property (getter=isDetectionEnabled,nonatomic,readonly) BOOL detectionEnabled;              //@synthesize detectionEnabled=_detectionEnabled - In the implementation block
@property (getter=isLiquidDetected,nonatomic,readonly) BOOL liquidDetected; 
+(id)sharedInstance;
+(BOOL)showStatusBarIcon;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_updateStatusBar;
-(void)_updateWetState;
-(void)_finishInit;
-(BOOL)isDetectionEnabled;
-(BOOL)isAccessoryPortWet;
-(BOOL)_showStatusBarIcon;
-(void)_stateDidUpdate;
-(BOOL)isLiquidDetected;
@end

