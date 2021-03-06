/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADObjectChangeID : NSObject <NSSecureCoding> {

	int _entityType;
	long long _changeID;

}

@property (nonatomic,readonly) int entityType;                  //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) long long changeID;              //@synthesize changeID=_changeID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeID;
-(int)entityType;
-(id)initWithEntityType:(int)arg1 changeID:(long long)arg2 ;
@end

