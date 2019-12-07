/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NURenderStatistics <NSObject>
@property (readonly) double latency; 
@property (readonly) double duration; 
@property (readonly) double totalDuration; 
@property (readonly) double prepareLatency; 
@property (readonly) double prepareDuration; 
@property (readonly) double renderLatency; 
@property (readonly) double renderDuration; 
@property (readonly) double completeLatency; 
@property (readonly) double completeDuration; 
@property (readonly) double replyLatency; 
@property (readonly) double requestTime; 
@property (readonly) double responseTime; 
@property (copy,readonly) NSArray * dependencies; 
@required
-(NSArray *)dependencies;
-(double)duration;
-(double)latency;
-(double)responseTime;
-(double)requestTime;
-(double)totalDuration;
-(double)completeDuration;
-(double)prepareDuration;
-(double)prepareLatency;
-(double)renderLatency;
-(double)renderDuration;
-(double)completeLatency;
-(double)replyLatency;

@end
