/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PAAggregatedStack <NSObject>
@required
-(int)count;
-(long long)compare:(id)arg1;
-(void)printToOutputStream:(id)arg1;
-(void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(BOOL)arg3;

@end
