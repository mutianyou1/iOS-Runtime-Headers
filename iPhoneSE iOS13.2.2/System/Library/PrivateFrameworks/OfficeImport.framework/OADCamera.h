/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {

	OADRotation3D* mRotation;
	int mCameraType;
	float mFieldOfView;
	float mZoom;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)cameraType;
-(id)rotation;
-(void)setRotation:(id)arg1 ;
-(void)setZoom:(float)arg1 ;
-(float)zoom;
-(float)fieldOfView;
-(void)setCameraType:(int)arg1 ;
-(void)setFieldOfView:(float)arg1 ;
@end

