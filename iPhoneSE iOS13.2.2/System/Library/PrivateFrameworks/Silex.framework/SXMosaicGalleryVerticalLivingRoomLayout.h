/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMosaicGalleryGroupLayout.h>

@interface SXMosaicGalleryVerticalLivingRoomLayout : SXMosaicGalleryGroupLayout {

	double _largeItemHeight;
	double _smallItemHeight;

}

@property (nonatomic,readonly) double largeItemHeight;              //@synthesize largeItemHeight=_largeItemHeight - In the implementation block
@property (nonatomic,readonly) double smallItemHeight;              //@synthesize smallItemHeight=_smallItemHeight - In the implementation block
-(NSRange)columnRangeForItem:(id)arg1 ;
-(double)calculateHeight;
-(id)calculateFrames;
-(id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3 ;
-(double)largeItemHeight;
-(double)smallItemHeight;
@end

