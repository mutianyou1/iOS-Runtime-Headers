/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPVoteStats : NSObject {

	long long _votes;
	long long _count;

}

@property (assign,nonatomic) long long votes;              //@synthesize votes=_votes - In the implementation block
@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(float)rate;
-(id)initWithVotes:(long long)arg1 andCount:(long long)arg2 ;
-(long long)votes;
-(void)setVotes:(long long)arg1 ;
@end

