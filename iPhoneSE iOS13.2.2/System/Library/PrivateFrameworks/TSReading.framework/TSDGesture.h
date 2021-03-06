/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, TSDRep;


@protocol TSDGesture <NSObject>
@property (nonatomic,retain) id<TSDGestureTarget> cachedGestureTarget; 
@property (assign,nonatomic) id<TSDGestureDelegate> gestureDelegate; 
@property (nonatomic,retain) NSString * gestureKind; 
@property (nonatomic,retain) TSDRep * targetRep; 
@property (nonatomic,readonly) int gestureState; 
@required
-(BOOL)isDone;
-(int)gestureState;
-(CGPoint*)unscaledLocationForICC:(id)arg1;
-(void)setGestureDelegate:(id)arg1;
-(void)setGestureKind:(id)arg1;
-(NSString *)gestureKind;
-(void)setCachedGestureTarget:(id)arg1;
-(id<TSDGestureTarget>)cachedGestureTarget;
-(void)setTargetRep:(id)arg1;
-(TSDRep *)targetRep;
-(CGPoint*)boundsLocationForICC:(id)arg1;
-(CGPoint*)naturalLocationForRep:(id)arg1;
-(id<TSDGestureDelegate>)gestureDelegate;

@end

