/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BCSBusinessItem, NSDate;

@interface BCSPersistentBusinessItemObject : NSObject {

	BCSBusinessItem* _businessItem;
	NSDate* _TTLDate;
	NSDate* _lastRetrievedDate;

}

@property (nonatomic,readonly) BCSBusinessItem * businessItem;              //@synthesize businessItem=_businessItem - In the implementation block
@property (nonatomic,readonly) NSDate * TTLDate;                            //@synthesize TTLDate=_TTLDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastRetrievedDate;                  //@synthesize lastRetrievedDate=_lastRetrievedDate - In the implementation block
-(BCSBusinessItem *)businessItem;
-(id)initWithBusinessItem:(id)arg1 lastRetrievedDate:(id)arg2 TTLDate:(id)arg3 ;
-(NSDate *)TTLDate;
-(NSDate *)lastRetrievedDate;
@end

