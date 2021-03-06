/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSServiceConnectionEndpoint;

@interface FBSDisplayLayoutMonitorConfiguration : NSObject {

	BSServiceConnectionEndpoint* _endpoint;
	BOOL _needsUserInteractivePriority;
	/*^block*/id _transitionHandler;

}

@property (nonatomic,copy,readonly) BSServiceConnectionEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic) BOOL needsUserInteractivePriority;                          //@synthesize needsUserInteractivePriority=_needsUserInteractivePriority - In the implementation block
@property (nonatomic,copy) id transitionHandler;                                         //@synthesize transitionHandler=_transitionHandler - In the implementation block
+(id)configurationWithEndpoint:(id)arg1 ;
+(id)configurationForDefaultMainDisplayMonitor;
-(id)init;
-(BSServiceConnectionEndpoint *)endpoint;
-(BOOL)needsUserInteractivePriority;
-(id)transitionHandler;
-(void)setTransitionHandler:(id)arg1 ;
-(id)_initWithEndpoint:(id)arg1 ;
-(void)setNeedsUserInteractivePriority:(BOOL)arg1 ;
@end

