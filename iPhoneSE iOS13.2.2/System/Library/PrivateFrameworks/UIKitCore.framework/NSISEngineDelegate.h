/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSISEngineDelegate <NSObject>
@optional
-(void)solutionDidChangeInEngine:(id)arg1;

@required
-(id)engine:(id)arg1 markerForConstraintToBreakAmongConstraints:(id)arg2;
-(void)engine:(id)arg1 willBreakConstraint:(id)arg2 dueToMutuallyExclusiveConstraints:(id)arg3;
-(void)constraintsDidChangeInEngine:(id)arg1;

@end

