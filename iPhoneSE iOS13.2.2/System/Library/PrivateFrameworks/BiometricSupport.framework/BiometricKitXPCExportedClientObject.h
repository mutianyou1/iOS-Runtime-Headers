/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, BiometricKitXPCExportedObject;

@interface BiometricKitXPCExportedClientObject : NSObject {

	unsigned long long _clientID;
	NSDictionary* _clientInfo;
	BiometricKitXPCExportedObject* _exportedObject;
	BOOL _delegateRegistered;
	BOOL _clientAppIsBackground;
	BOOL _clientAppIsInactive;

}

@property (nonatomic,readonly) unsigned long long clientID;                                        //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * clientInfo;                                     //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) BOOL delegateRegistered;                                            //@synthesize delegateRegistered=_delegateRegistered - In the implementation block
@property (nonatomic,readonly) BOOL clientAppIsBackground;                                         //@synthesize clientAppIsBackground=_clientAppIsBackground - In the implementation block
@property (nonatomic,readonly) BOOL clientAppIsInactive;                                           //@synthesize clientAppIsInactive=_clientAppIsInactive - In the implementation block
@property (nonatomic,__weak,readonly) BiometricKitXPCExportedObject * exportedObject; 
-(id)description;
-(BiometricKitXPCExportedObject *)exportedObject;
-(unsigned long long)clientID;
-(NSDictionary *)clientInfo;
-(void)statusMessage:(unsigned)arg1 ;
-(void)enrollResult:(id)arg1 ;
-(void)homeButtonPressed;
-(void)touchIDButtonPressed:(BOOL)arg1 ;
-(void)taskResumeStatus:(int)arg1 ;
-(id)initWithClientID:(unsigned long long)arg1 clientInfo:(id)arg2 exportedObject:(id)arg3 ;
-(void)setDelegateRegistered:(BOOL)arg1 ;
-(void)setClientAppIsBackground:(BOOL)arg1 ;
-(void)setClientAppIsInactive:(BOOL)arg1 ;
-(void)enrollUpdate:(id)arg1 ;
-(void)enrollFeedback:(id)arg1 ;
-(void)matchResult:(id)arg1 details:(id)arg2 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 ;
-(void)templateUpdate:(id)arg1 details:(id)arg2 ;
-(BOOL)delegateRegistered;
-(BOOL)clientAppIsBackground;
-(BOOL)clientAppIsInactive;
@end
