/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFSwitchParameter.h>
#import <libobjc.A.dylib/ICAppInstallStatusObserver.h>

@interface WFTumblrComposeInAppParameter : WFSwitchParameter <ICAppInstallStatusObserver>
-(BOOL)isHidden;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2 ;
@end

