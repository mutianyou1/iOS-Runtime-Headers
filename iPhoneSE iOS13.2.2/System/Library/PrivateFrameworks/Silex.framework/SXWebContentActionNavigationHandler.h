/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentNavigationHandler.h>

@protocol SXActionProvider, SXActionManager;
@class NSString;

@interface SXWebContentActionNavigationHandler : NSObject <SXWebContentNavigationHandler> {

	id<SXActionProvider> _actionProvider;
	id<SXActionManager> _actionManager;

}

@property (nonatomic,readonly) id<SXActionProvider> actionProvider;              //@synthesize actionProvider=_actionProvider - In the implementation block
@property (nonatomic,readonly) id<SXActionManager> actionManager;                //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)handleRequest:(id)arg1 ;
-(id<SXActionProvider>)actionProvider;
-(id<SXActionManager>)actionManager;
-(id)initWithActionProvider:(id)arg1 actionManager:(id)arg2 ;
@end
