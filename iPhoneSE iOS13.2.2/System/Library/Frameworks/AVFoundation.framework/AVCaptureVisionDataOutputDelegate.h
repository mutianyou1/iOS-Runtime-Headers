/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCaptureVisionDataOutputDelegate <NSObject>
@optional
-(void)visionDataOutput:(id)arg1 didOutputVisionDataPixelBuffer:(CVBufferRef)arg2 timestamp:(SCD_Struct_AV7)arg3 connection:(id)arg4;
-(void)visionDataOutput:(id)arg1 didDropVisionDataPixelBufferForTimestamp:(SCD_Struct_AV7)arg2 connection:(id)arg3 reason:(long long)arg4;

@end

