/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, VEKResult;

@interface VEKPipeline : NSObject {

	NSArray* _stages;
	VEKResult* _initialResult;
	/*^block*/id _progressBlock;

}

@property (nonatomic,copy) id progressBlock;                         //@synthesize progressBlock=_progressBlock - In the implementation block
@property (copy) NSArray * stages;                                   //@synthesize stages=_stages - In the implementation block
@property (nonatomic,retain) VEKResult * initialResult;              //@synthesize initialResult=_initialResult - In the implementation block
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(id)runPipeline;
-(NSArray *)stages;
-(VEKResult *)initialResult;
-(void)runPipelineWithOptions:(long long)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setStages:(NSArray *)arg1 ;
-(void)setInitialResult:(VEKResult *)arg1 ;
-(id)initWithStages:(id)arg1 ;
@end

