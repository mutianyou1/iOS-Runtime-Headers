/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEODataSessionTaskDelegate <NSObject>
@optional
-(void)dataSession:(id)arg1 didCompleteSubtask:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(/*^block*/id)arg4;

@required
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2;

@end

