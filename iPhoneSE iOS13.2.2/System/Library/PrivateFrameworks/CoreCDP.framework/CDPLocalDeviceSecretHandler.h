/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPLocalDeviceSecretHandlerProtocol;
@class CDPContext;

@interface CDPLocalDeviceSecretHandler : NSObject {

	id<CDPLocalDeviceSecretHandlerProtocol> _handlerProxy;
	CDPContext* _context;

}

@property (nonatomic,readonly) CDPContext * context;              //@synthesize context=_context - In the implementation block
-(CDPContext *)context;
-(void)userDidCancelWithError:(id)arg1 ;
-(void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithContext:(id)arg1 handler:(id)arg2 ;
@end

