/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NewsUI/NewsUI-Structs.h>
@class NUCanvas, NSObject;

@interface NUAsyncCanvas : NSObject {

	NUCanvas* _canvas;
	NSObject*<OS_dispatch_queue> _layoutQueue;

}

@property (nonatomic,readonly) NUCanvas * canvas;                                     //@synthesize canvas=_canvas - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> layoutQueue;              //@synthesize layoutQueue=_layoutQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)layoutQueue;
-(id)initWithCanvas:(id)arg1 ;
-(NUCanvas *)canvas;
-(id)initWithCanvas:(id)arg1 layoutQueue:(id)arg2 ;
-(void)layoutInBounds:(CGRect)arg1 traitCollection:(id)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)layoutInBounds:(CGRect)arg1 traitCollection:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

