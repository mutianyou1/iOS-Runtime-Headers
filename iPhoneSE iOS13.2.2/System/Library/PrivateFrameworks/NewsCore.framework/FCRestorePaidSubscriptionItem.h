/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCRestorePaidSubscriptionItem : NSObject {

	BOOL _isNewsAppPurchase;
	NSString* _channelID;

}

@property (nonatomic,readonly) NSString * channelID;                //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) BOOL isNewsAppPurchase;              //@synthesize isNewsAppPurchase=_isNewsAppPurchase - In the implementation block
-(BOOL)isNewsAppPurchase;
-(NSString *)channelID;
-(id)initWithChannelID:(id)arg1 isNewsAppPurchase:(BOOL)arg2 ;
@end
