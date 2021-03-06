/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTStandardEventHandler.h>

@class NSMutableArray;

@interface MTPageEventHandler : MTStandardEventHandler {

	NSMutableArray* _trackedPageHistory;

}

@property (nonatomic,retain) NSMutableArray * trackedPageHistory;                         //@synthesize trackedPageHistory=_trackedPageHistory - In the implementation block
@property (assign,nonatomic,__weak) id<MTPageEventHandlerDelegate> delegate; 
-(id)eventType;
-(id)knownFields;
-(id)eventVersion:(id)arg1 ;
-(id)pageHistory:(id)arg1 ;
-(NSMutableArray *)trackedPageHistory;
-(id)metricsDataWithCallerSuppliedFields:(id)arg1 ;
-(void)updatePageHistoryWithPage:(id)arg1 ;
-(void)setTrackedPageHistory:(NSMutableArray *)arg1 ;
@end

