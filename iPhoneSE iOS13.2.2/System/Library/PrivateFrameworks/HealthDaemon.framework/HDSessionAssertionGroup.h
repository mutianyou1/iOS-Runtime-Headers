/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface HDSessionAssertionGroup : NSObject {

	NSMutableSet* _allAssertions;
	NSMutableDictionary* _assertionsForState;
	long long _state;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
-(id)init;
-(void)invalidate;
-(long long)state;
-(void)transitionToState:(long long)arg1 ;
-(void)_transitionToNewAssertions:(id)arg1 ;
-(void)setupState:(long long)arg1 withAssertions:(id)arg2 ;
@end

