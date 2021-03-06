/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSError;


@protocol PLAssetsdServiceContext <NSObject>
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotos; 
@property (nonatomic,readonly) BOOL isClientAuthorizedForTCCServicePhotosAdd; 
@property (nonatomic,copy,readonly) NSString * clientDebugDescription; 
@property (nonatomic,copy) NSError * replyWarning; 
@required
-(BOOL)hasEntitlement:(id)arg1;
-(void)awaitLibraryState:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)isClientAuthorizedForTCCServicePhotos;
-(BOOL)isClientAuthorizedForTCCServicePhotosAdd;
-(NSString *)clientDebugDescription;
-(NSError *)replyWarning;
-(void)setReplyWarning:(id)arg1;

@end

