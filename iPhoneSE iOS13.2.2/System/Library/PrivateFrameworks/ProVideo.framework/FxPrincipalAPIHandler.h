/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PROAPIObject.h>

@protocol FxPlugPrincipalDelegate;
@class NSObject, NSString;

@interface FxPrincipalAPIHandler : NSObject <PROAPIObject> {

	NSObject*<FxPlugPrincipalDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
-(id)servicePrincipal;
@end
