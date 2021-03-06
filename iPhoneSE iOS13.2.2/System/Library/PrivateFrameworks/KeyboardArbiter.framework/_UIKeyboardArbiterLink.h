/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, _UIKeyboardArbiter;


@protocol _UIKeyboardArbiterLink <NSObject>
@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) _UIKeyboardArbiter * owner; 
@property (nonatomic,readonly) BOOL isAvailable; 
@required
-(void)setOwner:(id)arg1;
-(NSString *)serviceName;
-(_UIKeyboardArbiter *)owner;
-(BOOL)isAvailable;
-(void)detach:(id)arg1;
-(void)attach:(id)arg1;
-(void)connectWithQueue:(id)arg1;
-(void)createSceneWithCompletion:(/*^block*/id)arg1;
-(void)updateSceneSettings;

@end

