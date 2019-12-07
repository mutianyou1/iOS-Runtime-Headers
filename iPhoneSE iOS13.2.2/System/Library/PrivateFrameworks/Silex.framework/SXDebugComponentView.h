/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>

@protocol SXLayoutInvalidator;
@interface SXDebugComponentView : SXComponentView {

	id<SXLayoutInvalidator> _invalidator;

}

@property (nonatomic,readonly) id<SXLayoutInvalidator> invalidator;              //@synthesize invalidator=_invalidator - In the implementation block
-(void)presentComponentWithChanges:(SCD_Struct_SX16)arg1 ;
-(void)loadComponent:(id)arg1 ;
-(id<SXLayoutInvalidator>)invalidator;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 invalidator:(id)arg5 ;
@end
