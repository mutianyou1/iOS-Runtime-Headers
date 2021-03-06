/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKit/ARKit-Structs.h>
@class ARSession, NSArray;

@interface ARTrackedRaycastPostProcessor : NSObject {

	ARSession* _session;

}

@property (__weak) ARSession * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSArray * trackedRaycasts; 
-(void)dealloc;
-(ARSession *)session;
-(void)setSession:(ARSession *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)processInitialResults:(id)arg1 forRaycast:(id)arg2 ;
-(void)invalidateRaycastWithIdentifier:(id)arg1 ;
-(BOOL)result:(id)arg1 isCloseEnoughToInitialResultForRaycast:(id)arg2 ;
-(void)startUpdateTimer;
-(SCD_Struct_AR12)updatePose:(SCD_Struct_AR12)arg1 referenceOriginTransform:(SCD_Struct_AR12)arg2 oldRayOrigin:(double)arg3 oldRayDirection:(double)arg4 newRayOrigin:(double)arg5 newRayDirection:(double)arg6 ;
-(void)updateFromTimer:(id)arg1 ;
-(NSArray *)trackedRaycasts;
-(void)addTrackedRaycast:(id)arg1 andProcessInitialResults:(id)arg2 ;
-(void)removeTrackedRaycastWithIdentifier:(id)arg1 ;
-(void)invalidateAllRaycasts;
-(void)processUpdatedResults:(id)arg1 ;
-(void)performBlockWhileLockingRaycasts:(/*^block*/id)arg1 ;
-(void)updateFromPoseGraphEventWithData:(id)arg1 referenceOriginTransform:(SCD_Struct_AR12)arg2 ;
@end

