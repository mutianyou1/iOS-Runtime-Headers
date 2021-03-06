/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface PAImageConversionServiceClient : NSObject {

	NSXPCConnection* _serviceConnection;

}

@property (retain) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(void)convertImageAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSXPCConnection *)serviceConnection;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(void)setupServiceConnection;
-(void)convertImageAtSourceURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

