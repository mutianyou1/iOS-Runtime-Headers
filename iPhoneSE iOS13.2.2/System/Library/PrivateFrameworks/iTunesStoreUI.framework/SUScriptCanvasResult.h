/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class UIImage;

@interface SUScriptCanvasResult : NSObject {

	UIImage* _image;
	CGPathRef _path;

}

@property (nonatomic,readonly) UIImage * canvasImage;              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGPathRef canvasPath;               //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(UIImage *)canvasImage;
-(id)_initWithCanvas:(id)arg1 ;
-(CGPathRef)canvasPath;
@end

