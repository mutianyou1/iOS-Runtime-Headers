/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPAVRoute;

@interface MPAVRoutingControllerSelection : NSObject {

	MPAVRoute* _route;
	long long _selectionOperation;
	/*^block*/id _completion;

}

@property (nonatomic,retain) MPAVRoute * route;                         //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) long long selectionOperation;              //@synthesize selectionOperation=_selectionOperation - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
-(id)description;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(MPAVRoute *)route;
-(long long)selectionOperation;
-(void)setSelectionOperation:(long long)arg1 ;
-(id)initWithRoute:(id)arg1 selectionOperation:(long long)arg2 ;
@end

