/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSMPIdentity.h>

@interface IDSMPFullDeviceIdentity : IDSMPIdentity
+(id)deviceIdentityFromDataRepresentation:(id)arg1 publicAdminServiceIdentity:(id)arg2 error:(id*)arg3 ;
+(id)deviceIdentityWithFullAdminServiceIdentity:(id)arg1 error:(id*)arg2 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicDeviceIdentityWithError:(id*)arg1 ;
-(BOOL)purgeFromKeychain:(id*)arg1 ;
@end
