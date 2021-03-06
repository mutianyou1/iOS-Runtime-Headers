/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, SAMutableDataOutputStream;

@interface SAStackString : NSObject {

	BOOL _isMainThread;
	BOOL _isTargetThread;
	unsigned long long _count;
	NSMutableArray* _dispatchQueues;
	NSMutableArray* _threadIds;
	SAMutableDataOutputStream* _stream;

}

@property (assign) unsigned long long count;                        //@synthesize count=_count - In the implementation block
@property (retain) NSMutableArray * dispatchQueues;                 //@synthesize dispatchQueues=_dispatchQueues - In the implementation block
@property (retain) NSMutableArray * threadIds;                      //@synthesize threadIds=_threadIds - In the implementation block
@property (assign) BOOL isMainThread;                               //@synthesize isMainThread=_isMainThread - In the implementation block
@property (assign) BOOL isTargetThread;                             //@synthesize isTargetThread=_isTargetThread - In the implementation block
@property (retain) SAMutableDataOutputStream * stream;              //@synthesize stream=_stream - In the implementation block
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(BOOL)isMainThread;
-(SAMutableDataOutputStream *)stream;
-(void)setStream:(SAMutableDataOutputStream *)arg1 ;
-(void)setIsMainThread:(BOOL)arg1 ;
-(NSMutableArray *)dispatchQueues;
-(void)setDispatchQueues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)threadIds;
-(void)setThreadIds:(NSMutableArray *)arg1 ;
-(BOOL)isTargetThread;
-(void)setIsTargetThread:(BOOL)arg1 ;
@end

