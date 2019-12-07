/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <AXSpringBoardServerInstance/AXViewServiceHandler.h>

@class NSMutableDictionary, NSString;

@interface AXSpringBoardServerAlertManager : NSObject <SBSRemoteAlertHandleObserver, AXViewServiceHandler> {

	NSMutableDictionary* _handlesByService;

}

@property (nonatomic,retain) NSMutableDictionary * handlesByService;              //@synthesize handlesByService=_handlesByService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)showAXUIViewService:(id)arg1 withData:(id)arg2 ;
-(void)hideAXUIViewService:(id)arg1 ;
-(BOOL)isShowingAXUIViewService:(id)arg1 ;
-(NSMutableDictionary *)handlesByService;
-(void)setHandlesByService:(NSMutableDictionary *)arg1 ;
@end
