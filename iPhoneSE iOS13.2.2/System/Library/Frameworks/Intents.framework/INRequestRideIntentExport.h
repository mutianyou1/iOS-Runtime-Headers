/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLPlacemark, INSpeakableString, NSNumber, INPaymentMethod, INDateComponentsRange;


@protocol INRequestRideIntentExport <NSObject,JSExport>
@property (nonatomic,copy) CLPlacemark * pickupLocation; 
@property (nonatomic,copy) CLPlacemark * dropOffLocation; 
@property (nonatomic,copy) INSpeakableString * rideOptionName; 
@property (nonatomic,copy) NSNumber * partySize; 
@property (nonatomic,copy) INPaymentMethod * paymentMethod; 
@property (nonatomic,copy) INDateComponentsRange * scheduledPickupTime; 
@required
-(id)init;
-(INPaymentMethod *)paymentMethod;
-(CLPlacemark *)pickupLocation;
-(void)setPickupLocation:(id)arg1;
-(CLPlacemark *)dropOffLocation;
-(void)setDropOffLocation:(id)arg1;
-(INSpeakableString *)rideOptionName;
-(void)setRideOptionName:(id)arg1;
-(NSNumber *)partySize;
-(void)setPartySize:(id)arg1;
-(void)setPaymentMethod:(id)arg1;
-(INDateComponentsRange *)scheduledPickupTime;
-(void)setScheduledPickupTime:(id)arg1;

@end
