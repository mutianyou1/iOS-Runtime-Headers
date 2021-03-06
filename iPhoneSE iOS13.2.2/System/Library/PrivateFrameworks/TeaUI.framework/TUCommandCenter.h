/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCommandCenterType.h>

@interface TUCommandCenter : NSObject <TUCommandCenterType> {

	 commandCenter;

}
+(id)sharedCommandCenter;
+(void)setSharedCommandCenter:(id)arg1 ;
-(id)init;
-(void)removeContextProvider:(id)arg1 ;
-(void)executeCommand:(id)arg1 ;
-(BOOL)canExecuteCommand:(id)arg1 ;
-(void)addContextProvider:(id)arg1 forCommand:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeContextProvider:(id)arg1 forCommand:(id)arg2 ;
-(long long)stateForCommand:(id)arg1 ;
@end

