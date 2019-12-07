/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@class NSMutableSet, NSString;

@interface VUIRentalManager : NSObject <MPStoreDownloadManagerObserver> {

	BOOL _needToSendPlaybackStartDatesToServer;
	NSMutableSet* _rentalContextsNeedingCheckin;

}

@property (assign,nonatomic) BOOL needToSendPlaybackStartDatesToServer;                //@synthesize needToSendPlaybackStartDatesToServer=_needToSendPlaybackStartDatesToServer - In the implementation block
@property (nonatomic,retain) NSMutableSet * rentalContextsNeedingCheckin;              //@synthesize rentalContextsNeedingCheckin=_rentalContextsNeedingCheckin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)_activeAccountDidChange:(id)arg1 ;
-(void)_networkReachbilityDidChange:(id)arg1 ;
-(void)checkOutRentalWithID:(id)arg1 dsid:(id)arg2 checkoutType:(unsigned long long)arg3 startPlaybackClock:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)checkInRentalWithID:(id)arg1 dsid:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendPlaybackStartDatesToServerIfNecessary;
-(void)_checkInRentalsNeedingCheckInAtAppLaunch;
-(void)_didFetchInitialDownloads:(id)arg1 ;
-(void)setNeedToSendPlaybackStartDatesToServer:(BOOL)arg1 ;
-(NSMutableSet *)rentalContextsNeedingCheckin;
-(void)_checkInRentalsNeedingCheckIn;
-(BOOL)needToSendPlaybackStartDatesToServer;
-(void)initializeRentals;
-(void)setRentalContextsNeedingCheckin:(NSMutableSet *)arg1 ;
@end
