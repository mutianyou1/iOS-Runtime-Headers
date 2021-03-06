/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/FMSongRendition.h>

@class FlexMLSummary;

@interface FlexMLSongRendition : FMSongRendition {

	FlexMLSummary* _summary;

}

@property (nonatomic,retain) FlexMLSummary * summary;              //@synthesize summary=_summary - In the implementation block
-(FlexMLSummary *)summary;
-(void)setSummary:(FlexMLSummary *)arg1 ;
-(void)_calculateDuration:(SCD_Struct_PM5)arg1 ;
-(void)_buildTracks;
-(id)initWithSong:(id)arg1 options:(id)arg2 andSummary:(id)arg3 forDuration:(SCD_Struct_PM5)arg4 ;
-(id)_buildOutroFadeoutMixParams;
@end

