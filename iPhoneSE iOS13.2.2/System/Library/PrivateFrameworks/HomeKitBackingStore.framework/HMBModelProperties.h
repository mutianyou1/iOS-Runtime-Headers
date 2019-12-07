/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMBModelProperties
@required
+(BOOL)hmbShouldLogPrivateInformation;
+(void)setHmbShouldLogPrivateInformation:(BOOL)arg1;
-(id)hmbPropertyNamed:(id)arg1;
-(void)hmbSetProperty:(id)arg1 named:(id)arg2;
-(BOOL)hmbPropertyWasSet:(id)arg1;
-(BOOL)hmbPropertyIsReadOnly:(id)arg1;
-(id)hmbPropertyNamed:(id)arg1 isSet:(BOOL*)arg2;
-(void)hmbUnsetPropertyNamed:(id)arg1;
-(id)hmbDefaultValueForPropertyNamed:(id)arg1;
-(BOOL)hmbPropertyIsAvailable:(id)arg1;

@end
