/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PFUBLogEventID : NSObject {

	NSString* _idString;
	long long _hash;
	long long _eventType;

}

@property (nonatomic,readonly) NSString * idString;              //@synthesize idString=_idString - In the implementation block
@property (nonatomic,readonly) long long hash;                   //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) long long eventType;              //@synthesize eventType=_eventType - In the implementation block
+(void)initialize;
-(long long)hash;
-(long long)eventType;
-(id)initWithEventType:(int)arg1 ;
-(id)initWithCustomKey:(id)arg1 ;
-(NSString *)idString;
@end
