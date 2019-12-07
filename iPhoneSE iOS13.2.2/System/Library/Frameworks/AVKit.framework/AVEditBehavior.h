/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVBehaviorInternal.h>
#import <AVKit/AVBehavior.h>

@protocol AVEditBehaviorDelegate;
@class AVEditBehaviorContext, NSString;

@interface AVEditBehavior : NSObject <AVBehaviorInternal, AVBehavior> {

	AVEditBehaviorContext* _behaviorContext;
	id<AVEditBehaviorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) AVEditBehaviorContext * behaviorContext;              //@synthesize behaviorContext=_behaviorContext - In the implementation block
@property (assign,nonatomic,__weak) id<AVEditBehaviorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)behaviorContextClass;
-(id<AVEditBehaviorDelegate>)delegate;
-(void)setDelegate:(id<AVEditBehaviorDelegate>)arg1 ;
-(void)willMoveToContext:(id)arg1 ;
-(AVEditBehaviorContext *)behaviorContext;
-(void)setBehaviorContext:(AVEditBehaviorContext *)arg1 ;
-(void)didMoveToContext:(id)arg1 ;
-(void)willRemoveFromContext:(id)arg1 ;
-(void)didRemoveFromContext:(id)arg1 ;
@end
