/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@class UIImage, NSString;

@interface _UIStackedImageSingleNamedLayerImage : NSObject <UINamedLayerImage> {

	UIImage* _imageObj;

}

@property (nonatomic,retain) UIImage * imageObj;                                             //@synthesize imageObj=_imageObj - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) int blendMode; 
@property (assign,nonatomic) BOOL fixedFrame; 
@property (nonatomic,readonly) id<UINamedLayerContentProvider> contentProvider; 
-(NSString *)name;
-(CGRect)frame;
-(double)opacity;
-(UIImage *)imageObj;
-(int)blendMode;
-(void)setImageObj:(UIImage *)arg1 ;
@end
