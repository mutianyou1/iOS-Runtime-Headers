/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FMDispatchTimer;

@interface FMNanoIDSRequest : NSObject {

	NSString* _idsMessageID;
	/*^block*/id _responseHandler;
	FMDispatchTimer* _timer;

}

@property (nonatomic,retain) NSString * idsMessageID;              //@synthesize idsMessageID=_idsMessageID - In the implementation block
@property (nonatomic,copy) id responseHandler;                     //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) FMDispatchTimer * timer;              //@synthesize timer=_timer - In the implementation block
-(FMDispatchTimer *)timer;
-(void)setTimer:(FMDispatchTimer *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(NSString *)idsMessageID;
-(void)setIdsMessageID:(NSString *)arg1 ;
@end
