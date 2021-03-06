/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedDescriptor.h>

@protocol FCChannelProviding;
@class NSString;

@interface FCDraftFeedDescriptor : FCFeedDescriptor {

	id<FCChannelProviding> _channel;
	NSString* _articleListID;
	NSString* _issueListID;

}

@property (nonatomic,readonly) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) NSString * articleListID;                    //@synthesize articleListID=_articleListID - In the implementation block
@property (nonatomic,readonly) NSString * issueListID;                      //@synthesize issueListID=_issueListID - In the implementation block
-(id)name;
-(id<FCChannelProviding>)channel;
-(id)initWithChannel:(id)arg1 articleListID:(id)arg2 issueListID:(id)arg3 ;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 ;
-(id)backingChannel;
-(long long)feedType;
-(NSString *)issueListID;
-(NSString *)articleListID;
@end

