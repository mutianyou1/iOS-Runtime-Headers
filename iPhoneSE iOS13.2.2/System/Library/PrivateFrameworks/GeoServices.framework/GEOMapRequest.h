/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {

	GEOMapRequestManager* _requestManager;
	/*^block*/id _completionHandler;
	/*^block*/id _cancellationHandler;
	BOOL _isFinished;

}

@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id cancellationHandler;              //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,readonly) BOOL isFinished;                 //@synthesize isFinished=_isFinished - In the implementation block
-(void)dealloc;
-(void)cancel;
-(BOOL)isFinished;
-(id)initWithManager:(id)arg1 ;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)complete;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_finishAndCallHandler:(/*^block*/id)arg1 ;
@end

