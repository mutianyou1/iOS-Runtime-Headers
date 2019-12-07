/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetsdLibraryManagementServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, PLPhotoLibraryBundleController, NSString;

@interface PLAssetsdLibraryManagementService : NSObject <PLAssetsdLibraryManagementServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	PLPhotoLibraryBundleController* _bundleController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSystemPhotoLibraryURL:(id)arg1 bookmark:(id)arg2 options:(unsigned short)arg3 reply:(/*^block*/id)arg4 ;
-(void)getActivePhotoLibrariesWithReply:(/*^block*/id)arg1 ;
-(void)getPhotoLibraryURLsWithReply:(/*^block*/id)arg1 ;
-(id)initWithConnectionAuthorization:(id)arg1 bundleController:(id)arg2 ;
-(void)_disableCloudServicesInPhotoLibraryBundle:(id)arg1 withReason:(id)arg2 ;
@end
