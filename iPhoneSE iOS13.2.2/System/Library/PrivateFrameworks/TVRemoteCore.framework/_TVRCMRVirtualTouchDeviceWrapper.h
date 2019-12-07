/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@interface _TVRCMRVirtualTouchDeviceWrapper : NSObject {

	void* _deviceDescriptor;

}

@property (assign,getter=isAbsolute,nonatomic) BOOL absolute; 
@property (assign,getter=isDisplayIntegrated,nonatomic) BOOL displayIntegrated; 
@property (assign,nonatomic) CGSize screenSize; 
-(id)init;
-(void)dealloc;
-(BOOL)isAbsolute;
-(void)setScreenSize:(CGSize)arg1 ;
-(CGSize)screenSize;
-(BOOL)isDisplayIntegrated;
-(void)setAbsolute:(BOOL)arg1 ;
-(void*)deviceDescriptor;
-(void)setDisplayIntegrated:(BOOL)arg1 ;
@end
