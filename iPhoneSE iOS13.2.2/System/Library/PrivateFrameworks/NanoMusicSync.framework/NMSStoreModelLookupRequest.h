/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSArray;

@interface NMSStoreModelLookupRequest : MPStoreModelRequest {

	NSArray* _containerIDs;

}

@property (nonatomic,copy) NSArray * containerIDs;              //@synthesize containerIDs=_containerIDs - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerIDs:(NSArray *)arg1 ;
-(NSArray *)containerIDs;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
@end

