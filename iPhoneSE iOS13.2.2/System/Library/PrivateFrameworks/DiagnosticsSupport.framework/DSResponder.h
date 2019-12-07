/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DKBrightnessResponder.h>
#import <libobjc.A.dylib/DKVolumeHUDResponder.h>

@class NSString;

@interface DSResponder : NSObject <DKBrightnessResponder, DKVolumeHUDResponder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)enableVolumeHUD:(BOOL)arg1 ;
@end
