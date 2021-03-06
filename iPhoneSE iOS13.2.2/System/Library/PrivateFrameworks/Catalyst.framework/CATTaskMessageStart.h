/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskMessage.h>

@class CATTaskRequest;

@interface CATTaskMessageStart : CATTaskMessage {

	CATTaskRequest* _request;

}

@property (nonatomic,retain) CATTaskRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequest:(CATTaskRequest *)arg1 ;
-(CATTaskRequest *)request;
-(id)initWithTaskUUID:(id)arg1 request:(id)arg2 ;
@end

