/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AASigningSessionResponse : AAResponse {

	NSData* _sessionData;

}

@property (nonatomic,retain) NSData * sessionData;              //@synthesize sessionData=_sessionData - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSData *)sessionData;
-(void)setSessionData:(NSData *)arg1 ;
@end

