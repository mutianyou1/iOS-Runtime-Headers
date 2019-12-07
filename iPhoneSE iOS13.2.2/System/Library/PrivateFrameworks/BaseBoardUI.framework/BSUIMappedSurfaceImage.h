/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImage.h>

@class NSData;

@interface BSUIMappedSurfaceImage : UIImage {

	NSData* _mappedSurfaceData;

}

@property (setter=_setMappedSurfaceData:,getter=_mappedSurfaceData,nonatomic,retain) NSData * _mappedSurfaceData;              //@synthesize mappedSurfaceData=_mappedSurfaceData - In the implementation block
+(id)mappedSurfaceImageFromPath:(id)arg1 loadEagerly:(BOOL)arg2 ;
+(BOOL)writeSurfaceImage:(id)arg1 toFileDescriptor:(int)arg2 ;
-(void)_setMappedSurfaceData:(id)arg1 ;
-(NSData *)_mappedSurfaceData;
@end
