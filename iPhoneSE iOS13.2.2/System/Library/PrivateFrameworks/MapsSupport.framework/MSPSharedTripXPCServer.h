/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPSharedTripXPCServer <NSObject>
@required
-(void)checkin;
-(void)fetchAccountValidWithCompletion:(/*^block*/id)arg1;
-(void)fetchSendingIdentityWithCompletion:(/*^block*/id)arg1;
-(void)startSharingTripWithContacts:(id)arg1;
-(void)stopSharingTripWithContacts:(id)arg1;
-(void)startSharingTripWithMessagesContacts:(id)arg1;
-(void)stopSharingTripWithMessagesContacts:(id)arg1;
-(void)startSharingTripWithMessagesGroup:(id)arg1;
-(void)stopSharingTripWithMessagesGroup:(id)arg1;
-(void)stopSharingTrip;
-(void)fetchActiveHandlesWithCompletion:(/*^block*/id)arg1;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1;
-(void)fetchSharedTripsWithCompletion:(/*^block*/id)arg1;
-(void)blockSharedTrip:(id)arg1;

@end
