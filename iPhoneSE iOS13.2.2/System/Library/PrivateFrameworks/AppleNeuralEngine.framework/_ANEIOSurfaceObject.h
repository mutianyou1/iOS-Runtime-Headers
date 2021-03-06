/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleNeuralEngine/AppleNeuralEngine-Structs.h>
@interface _ANEIOSurfaceObject : NSObject {

	IOSurfaceRef _ioSurface;

}

@property (nonatomic,readonly) IOSurfaceRef ioSurface;              //@synthesize ioSurface=_ioSurface - In the implementation block
+(id)new;
+(id)objectWithIOSurface:(IOSurfaceRef)arg1 ;
+(IOSurfaceRef)createIOSurfaceWithWidth:(int)arg1 pixel_size:(int)arg2 height:(int)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)ioSurface;
@end

