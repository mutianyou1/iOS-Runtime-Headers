/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, NSXPCConnection;

@interface VSAuthenticationBulletinOperation : VSAsyncOperation {

	NSURL* _appStoreRoomURL;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSURL * appStoreRoomURL;              //@synthesize appStoreRoomURL=_appStoreRoomURL - In the implementation block
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)executionDidBegin;
-(id)_serviceWithErrorHandler:(/*^block*/id)arg1 ;
-(NSURL *)appStoreRoomURL;
-(id)initWithAppStoreRoomURL:(id)arg1 ;
@end

