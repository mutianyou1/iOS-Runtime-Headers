/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BFFNavigationControllerDelegate;
@interface BFFNavigationObserver : NSObject {

	id<BFFNavigationControllerDelegate> _observer;

}

@property (assign,nonatomic,__weak) id<BFFNavigationControllerDelegate> observer;              //@synthesize observer=_observer - In the implementation block
+(id)observerWithObserver:(id)arg1 ;
-(id<BFFNavigationControllerDelegate>)observer;
-(void)setObserver:(id<BFFNavigationControllerDelegate>)arg1 ;
@end
