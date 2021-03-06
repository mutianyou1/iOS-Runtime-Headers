/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PRRangingClientProtocol <NSObject>
@optional
-(void)didReceiveNewSolutions:(id)arg1;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;

@required
-(void)didFailWithError:(id)arg1;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1;

@end

