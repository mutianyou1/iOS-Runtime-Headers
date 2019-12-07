/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTStoreBackend <NSObject>
@property (assign,nonatomic,__weak) id<AVTStoreBackendDelegate> backendDelegate; 
@property (nonatomic,readonly) id<AVTAvatarRecordChangeTracker> recordChangeTracker; 
@required
-(id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2;
-(BOOL)saveAvatar:(id)arg1 error:(id*)arg2;
-(BOOL)saveAvatars:(id)arg1 error:(id*)arg2;
-(BOOL)deleteAvatarWithIdentifier:(id)arg1 error:(id*)arg2;
-(id)duplicateAvatarRecord:(id)arg1 error:(id*)arg2;
-(BOOL)canCreateAvatarWithError:(id*)arg1;
-(id<AVTStoreBackendDelegate>)backendDelegate;
-(void)setBackendDelegate:(id)arg1;
-(id<AVTAvatarRecordChangeTracker>)recordChangeTracker;

@end
