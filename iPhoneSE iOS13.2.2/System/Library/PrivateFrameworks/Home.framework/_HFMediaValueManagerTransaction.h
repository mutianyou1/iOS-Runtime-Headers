/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NAFuture, NSNumber;

@interface _HFMediaValueManagerTransaction : NSObject {

	NAFuture* _writeFuture;
	long long _playbackState;
	NSNumber* _transactionNumber;

}

@property (nonatomic,retain) NAFuture * writeFuture;                    //@synthesize writeFuture=_writeFuture - In the implementation block
@property (assign,nonatomic) long long playbackState;                   //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,retain) NSNumber * transactionNumber;              //@synthesize transactionNumber=_transactionNumber - In the implementation block
-(id)init;
-(id)description;
-(NSNumber *)transactionNumber;
-(void)setTransactionNumber:(NSNumber *)arg1 ;
-(long long)playbackState;
-(void)setPlaybackState:(long long)arg1 ;
-(NAFuture *)writeFuture;
-(void)setWriteFuture:(NAFuture *)arg1 ;
@end

