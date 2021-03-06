/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable;

@interface GEORPLegacyProblemRequester : NSObject {

	NSMapTable* _pendingRequests;
	os_unfair_lock_s _pendingRequestsLock;

}
+(id)sharedRequester;
-(id)init;
-(void)dealloc;
-(void)cancelRequest:(id)arg1 ;
-(void)startSubmissionRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)startStatusRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
@end

