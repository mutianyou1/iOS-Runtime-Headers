/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _EDThreadScopeInfo : NSObject {

	BOOL _needsUpdate;
	long long _databaseID;
	NSDate* _lastViewedDate;

}

@property (nonatomic,readonly) long long databaseID;               //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                     //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,retain) NSDate * lastViewedDate;              //@synthesize lastViewedDate=_lastViewedDate - In the implementation block
-(id)description;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)setLastViewedDate:(NSDate *)arg1 ;
-(NSDate *)lastViewedDate;
-(long long)databaseID;
-(id)initWithDatabaseID:(long long)arg1 needsUpdate:(BOOL)arg2 lastViewedDate:(id)arg3 ;
@end
