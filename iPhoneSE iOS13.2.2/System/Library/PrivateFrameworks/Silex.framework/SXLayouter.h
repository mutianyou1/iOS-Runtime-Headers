/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXLayouter <NSObject>
@property (assign,nonatomic,__weak) id<SXLayouterDelegate> delegate; 
@required
-(id<SXLayouterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(BOOL*)arg4;

@end
