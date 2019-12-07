/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface TPSAsyncBlockOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	/*^block*/id _asyncBlock;

}

@property (assign,nonatomic) BOOL isExecuting;              //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;               //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,copy) id asyncBlock;                   //@synthesize asyncBlock=_asyncBlock - In the implementation block
+(id)asyncBlockOperationWithAsyncBlock:(/*^block*/id)arg1 ;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)complete;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(id)initWithAsyncBlock:(/*^block*/id)arg1 ;
-(id)asyncBlock;
-(void)setAsyncBlock:(id)arg1 ;
@end
