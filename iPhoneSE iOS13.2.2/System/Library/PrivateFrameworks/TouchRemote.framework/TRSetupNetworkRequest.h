/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRSetupNetworkRequest : TRRequestMessage {

	NSString* _networkSSID;
	NSString* _networkPassword;

}

@property (nonatomic,copy) NSString * networkSSID;                  //@synthesize networkSSID=_networkSSID - In the implementation block
@property (nonatomic,copy) NSString * networkPassword;              //@synthesize networkPassword=_networkPassword - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setNetworkSSID:(NSString *)arg1 ;
-(void)setNetworkPassword:(NSString *)arg1 ;
-(NSString *)networkSSID;
-(NSString *)networkPassword;
@end
