/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol UIDragInteractionContext <UIInteractionContext>
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) BOOL shouldAnimateLift; 
@property (nonatomic,readonly) id animations; 
@property (nonatomic,readonly) id completion; 
@required
-(long long)state;
-(id)animations;
-(id)completion;
-(NSArray *)items;
-(BOOL)shouldAnimateLift;

@end

