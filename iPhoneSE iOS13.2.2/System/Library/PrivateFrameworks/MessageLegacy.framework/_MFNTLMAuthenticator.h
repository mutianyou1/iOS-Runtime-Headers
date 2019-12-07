/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <EmailCore/ECSASLAuthenticator.h>

@interface _MFNTLMAuthenticator : ECSASLAuthenticator {

	NtlmGeneratorRef _ntlmGeneratorRef;
	int _ntlmError;

}
-(void)dealloc;
-(id)responseForServerData:(id)arg1 ;
-(void)setAuthenticationState:(long long)arg1 ;
@end
