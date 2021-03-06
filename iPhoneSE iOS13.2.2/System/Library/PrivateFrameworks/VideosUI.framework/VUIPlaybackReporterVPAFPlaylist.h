/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTMediaPlaylist.h>

@protocol TVPPlayback;
@class NSArray, NSObject, NSString;

@interface VUIPlaybackReporterVPAFPlaylist : NSObject <MTMediaPlaylist> {

	BOOL _isLive;
	NSArray* _eventData;
	NSObject*<TVPPlayback> _player;
	NSArray* _items;

}

@property (assign,nonatomic,__weak) NSObject*<TVPPlayback> player;              //@synthesize player=_player - In the implementation block
@property (nonatomic,copy) NSArray * items;                                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSArray * eventData;                               //@synthesize eventData=_eventData - In the implementation block
@property (assign,nonatomic) BOOL isLive;                                       //@synthesize isLive=_isLive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(BOOL)isLive;
-(NSObject*<TVPPlayback>)player;
-(void)setPlayer:(NSObject*<TVPPlayback>)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(NSArray *)eventData;
-(void)setEventData:(NSArray *)arg1 ;
-(id)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2 ;
-(id)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2 ;
-(void)setIsLive:(BOOL)arg1 ;
@end

