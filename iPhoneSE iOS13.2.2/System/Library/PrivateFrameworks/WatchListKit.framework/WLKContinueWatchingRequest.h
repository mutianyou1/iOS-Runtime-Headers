/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequest : WLKRequest {

	BOOL _allowAuthentication;
	WLKContinueWatchingResponse* _response;

}

@property (assign,nonatomic) BOOL allowAuthentication;                              //@synthesize allowAuthentication=_allowAuthentication - In the implementation block
@property (nonatomic,readonly) WLKContinueWatchingResponse * response;              //@synthesize response=_response - In the implementation block
-(id)init;
-(WLKContinueWatchingResponse *)response;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)allowAuthentication;
-(void)setAllowAuthentication:(BOOL)arg1 ;
@end

