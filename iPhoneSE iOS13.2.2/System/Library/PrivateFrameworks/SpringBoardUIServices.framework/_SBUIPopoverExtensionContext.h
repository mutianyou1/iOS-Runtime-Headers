/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>

@protocol _SBUIPopoverExtensionHostInterface;
@interface _SBUIPopoverExtensionContext : NSExtensionContext {

	id<_SBUIPopoverExtensionHostInterface> _hostService;

}

@property (assign,nonatomic,__weak) id<_SBUIPopoverExtensionHostInterface> hostService;              //@synthesize hostService=_hostService - In the implementation block
-(id<_SBUIPopoverExtensionHostInterface>)hostService;
-(void)setHostService:(id<_SBUIPopoverExtensionHostInterface>)arg1 ;
-(void)requestDismiss;
@end
