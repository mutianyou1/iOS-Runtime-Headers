/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVFace, PVImage;

@interface PVFaceCropSourceDescriptor : NSObject <NSCopying> {

	PVFace* _face;
	PVImage* _image;

}
+(id)descriptorForFace:(id)arg1 image:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)face;
-(id)image;
-(id)initWithFace:(id)arg1 image:(id)arg2 ;
@end
