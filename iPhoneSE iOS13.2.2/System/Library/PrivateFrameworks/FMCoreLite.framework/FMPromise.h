/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMPromise <NSObject>
@required
-(BOOL)finishWithError:(id)arg1;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2;
-(BOOL)finishWithResult:(id)arg1;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapter;
-(BOOL)finishWithNoResult;

@end

