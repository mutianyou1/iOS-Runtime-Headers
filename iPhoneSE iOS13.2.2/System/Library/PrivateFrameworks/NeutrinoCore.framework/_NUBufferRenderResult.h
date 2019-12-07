/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/_NUImageRenderResult.h>
#import <libobjc.A.dylib/NUBufferRenderResult.h>

@protocol NUBufferImage;
@class NSString, NURegion, NUImageGeometry;

@interface _NUBufferRenderResult : _NUImageRenderResult <NUBufferRenderResult> {

	id<NUBufferImage> _image;

}

@property (retain) id<NUBufferImage> image;                          //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) NURegion * region; 
@property (readonly) NUImageGeometry * geometry; 
-(id<NUBufferImage>)image;
-(void)setImage:(id<NUBufferImage>)arg1 ;
@end
