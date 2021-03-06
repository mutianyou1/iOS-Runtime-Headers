/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
@class NSMapTable, NSString;

@interface PPNotificationHandler : NSObject {

	atomic_flag _isFiring;
	atomic_flag _hasWaiter;
	double _waitSeconds;
	NSMapTable* _blockMap;
	NSString* _name;

}

@property (assign,nonatomic) double waitSeconds;                 //@synthesize waitSeconds=_waitSeconds - In the implementation block
@property (nonatomic,retain) NSMapTable * blockMap;              //@synthesize blockMap=_blockMap - In the implementation block
@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
-(id)description;
-(NSString *)name;
-(void)fire;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 waitSeconds:(double)arg2 ;
-(void)_executeBlocks;
-(void)_clearFlags;
-(void)addObserverBlock:(/*^block*/id)arg1 forLifetimeOfObject:(id)arg2 ;
-(double)waitSeconds;
-(void)setWaitSeconds:(double)arg1 ;
-(NSMapTable *)blockMap;
-(void)setBlockMap:(NSMapTable *)arg1 ;
@end

