/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUCacheNode.h>

@protocol NUBufferImage;
@interface NUMemoryCacheNode : NUCacheNode {

	id<NUBufferImage> _cachedImage;

}

@property (readonly) id<NUBufferImage> cachedImage;              //@synthesize cachedImage=_cachedImage - In the implementation block
-(id)persistentURL;
-(id<NUBufferImage>)cachedImage;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(BOOL)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2 ;
-(id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2 ;
-(void)resolveSourceWithResponse:(NUResponse*)arg1 ;
@end

