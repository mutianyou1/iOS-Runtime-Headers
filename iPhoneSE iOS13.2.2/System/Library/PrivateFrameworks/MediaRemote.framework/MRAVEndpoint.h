/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSOperationQueue, NSTimer, NSString, NSArray, MRExternalDevice, MRAVOutputDevice, _MRAVEndpointDescriptorProtobuf, NSDictionary, _MROriginProtobuf;

@interface MRAVEndpoint : NSObject {

	NSMutableArray* _pendingConnectionHandlers;
	NSOperationQueue* _connectionHandlerOperationQueue;
	BOOL _registeredForConnectionStateDidChangeNotifications;
	NSTimer* _connectionTimeoutTimer;
	BOOL _outputDevicesDidChangeNotificationScheduled;
	BOOL _proxyGroupPlayer;
	long long _connectionType;
	NSString* _localizedName;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,retain) NSString * localizedName;                                            //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * outputDevices; 
@property (nonatomic,readonly) NSArray * personalOutputDevices; 
@property (nonatomic,readonly) NSArray * outputDeviceUIDs; 
@property (nonatomic,readonly) unsigned long long logicalOutputDeviceCount; 
@property (nonatomic,readonly) MRExternalDevice * externalDevice; 
@property (nonatomic,readonly) MRAVOutputDevice * designatedGroupLeader; 
@property (nonatomic,readonly) long long connectionType;                                          //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) NSString * debugName; 
@property (assign,getter=isProxyGroupPlayer,nonatomic) BOOL proxyGroupPlayer;                     //@synthesize proxyGroupPlayer=_proxyGroupPlayer - In the implementation block
@property (nonatomic,readonly) BOOL canModifyGroupMembership; 
@property (nonatomic,readonly) _MRAVEndpointDescriptorProtobuf * descriptor; 
@property (nonatomic,readonly) NSString * shortDescription; 
@property (nonatomic,readonly) NSDictionary * jsonEncodableDictionaryRepresentation; 
@property (getter=isLocalEndpoint,nonatomic,readonly) BOOL localEndpoint; 
@property (nonatomic,readonly) _MROriginProtobuf * origin; 
+(id)_notificationSerialQueue;
+(void)_modifyOutputDevices:(id)arg1 inGroup:(id)arg2 queue:(id)arg3 modifyDevices:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)_init;
-(NSString *)localizedName;
-(NSString *)uniqueIdentifier;
-(long long)connectionType;
-(_MROriginProtobuf *)origin;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(_MRAVEndpointDescriptorProtobuf *)descriptor;
-(NSString *)shortDescription;
-(NSString *)debugName;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSArray *)outputDevices;
-(MRExternalDevice *)externalDevice;
-(BOOL)isVolumeControlAvailable;
-(BOOL)isProxyGroupPlayer;
-(BOOL)canModifyGroupMembership;
-(NSArray *)outputDeviceUIDs;
-(void)scheduleEndpointOutputDevicesDidChangeNotification;
-(NSArray *)personalOutputDevices;
-(void)connectToExternalDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDictionary *)jsonEncodableDictionaryRepresentation;
-(id)outputDevicesMatchingPredicate:(/*^block*/id)arg1 ;
-(void)migrateToOutputDevice:(id)arg1 request:(id)arg2 initiator:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(MRAVOutputDevice *)designatedGroupLeader;
-(BOOL)isLocalEndpoint;
-(void)_callAllCompletionHandlersWithError:(id)arg1 ;
-(void)_externalDeviceConnectionStateDidChangeNotification:(id)arg1 ;
-(void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg1 removingDevices:(id)arg2 settingDevices:(id)arg3 replyQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_initiatorStringWithInitiator:(id)arg1 uid:(id)arg2 ;
-(void)migrateToLogicalOutputDevice:(id)arg1 request:(id)arg2 initiator:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)migrateToEndpoint:(id)arg1 request:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_prepareToMigrateToEndpoint:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)logicalOutputDeviceCount;
-(void)migrateToOrAddOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)migrateToOrSetOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)canMigrateToEndpoint:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)outputDeviceUIDsMatchingPredicate:(/*^block*/id)arg1 ;
-(BOOL)effectivelyEqual:(id)arg1 ;
-(void)setProxyGroupPlayer:(BOOL)arg1 ;
@end
