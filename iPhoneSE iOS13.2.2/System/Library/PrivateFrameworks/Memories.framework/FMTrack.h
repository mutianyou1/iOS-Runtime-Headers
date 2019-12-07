/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FMMixParameters;

@interface FMTrack : NSObject {

	NSArray* _clips;
	FMMixParameters* _mixParameters;

}

@property (nonatomic,retain) NSArray * clips;                              //@synthesize clips=_clips - In the implementation block
@property (nonatomic,retain) FMMixParameters * mixParameters;              //@synthesize mixParameters=_mixParameters - In the implementation block
-(id)description;
-(void)setClips:(NSArray *)arg1 ;
-(NSArray *)clips;
-(FMMixParameters *)mixParameters;
-(void)setMixParameters:(FMMixParameters *)arg1 ;
-(id)initWithClips:(id)arg1 mixParameters:(id)arg2 ;
@end
