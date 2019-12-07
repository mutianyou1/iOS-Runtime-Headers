/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWPixelBufferPool.h>

@class BWVideoFormat;

@interface BWDeferredContainerPixelBufferPool : BWPixelBufferPool {

	BWVideoFormat* _videoFormat;

}

@property (nonatomic,readonly) BWVideoFormat * videoFormat;                                 //@synthesize videoFormat=_videoFormat - In the implementation block
@property (nonatomic,readonly) CVPixelBufferPoolRef cvPixelBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvPixelBufferPoolAuxAttributes; 
+(void)initialize;
-(void)dealloc;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)flush;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(BWVideoFormat *)videoFormat;
-(CVBufferRef)newPixelBuffer;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4 ;
-(void)preallocateWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)preallocate;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 memoryPool:(id)arg5 ;
-(void)setCVPixelBufferPool:(CVPixelBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(CVPixelBufferPoolRef)cvPixelBufferPool;
-(CFDictionaryRef)cvPixelBufferPoolAuxAttributes;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithAttributes:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
@end
