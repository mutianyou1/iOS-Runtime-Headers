/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TROperationHandler.h>

@class NSString;

@interface TRActivationOperationHandler : NSObject <TROperationHandler> {

	/*^block*/id _activationHandler;

}

@property (nonatomic,copy) id activationHandler;                    //@synthesize activationHandler=_activationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithActivationHandler:(/*^block*/id)arg1 ;
-(void)setActivationHandler:(id)arg1 ;
-(id)activationHandler;
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleActivationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
@end
