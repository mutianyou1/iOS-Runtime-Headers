/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@protocol SBDownloadingIconDataSource;
@class NSString;

@interface SBDownloadingIcon : SBLeafIcon {

	BOOL _uninstalledByUser;
	id<SBDownloadingIconDataSource> _downloadingIconDataSource;

}

@property (nonatomic,readonly) id<SBDownloadingIconDataSource> downloadingIconDataSource;              //@synthesize downloadingIconDataSource=_downloadingIconDataSource - In the implementation block
@property (assign,nonatomic) BOOL uninstalledByUser;                                                   //@synthesize uninstalledByUser=_uninstalledByUser - In the implementation block
@property (nonatomic,copy,readonly) NSString * realDisplayName; 
+(id)leafIdentifierForApplicationPlaceholderBundleID:(id)arg1 ;
+(id)applicationPlaceholderBundleIDForDownloadingIconLeafIdentifier:(id)arg1 ;
+(BOOL)isDownloadingIconLeafIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cancelDownload;
-(void)setDownloadingIconDataSource:(id<SBDownloadingIconDataSource>)arg1 ;
-(void)setUninstalledByUser:(BOOL)arg1 ;
-(id<SBDownloadingIconDataSource>)downloadingIconDataSource;
-(id)initWithDownloadingIconDataSource:(id)arg1 ;
-(NSString *)realDisplayName;
-(void)reloadForStatusChange;
-(id)uninstallAlertBody;
-(id)descriptionForLocation:(id)arg1 ;
-(BOOL)isDownloadingIcon;
-(BOOL)uninstalledByUser;
@end

