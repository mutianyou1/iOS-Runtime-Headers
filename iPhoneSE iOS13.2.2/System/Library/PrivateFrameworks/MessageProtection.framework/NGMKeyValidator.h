/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageProtection/MessageProtection-Structs.h>
@interface NGMKeyValidator : NSObject
+(id)keyValidatorWithReceiversIdentity:(id)arg1 sendersIdentity:(id)arg2 ;
+(BOOL)isValidKeyValidator:(id)arg1 receiversIdentity:(id)arg2 sendersIdentity:(id)arg3 error:(id*)arg4 ;
+(NSRange)rangeOnPublicKey;
+(id)versionByte;
+(unsigned long long)validatorLength;
@end

