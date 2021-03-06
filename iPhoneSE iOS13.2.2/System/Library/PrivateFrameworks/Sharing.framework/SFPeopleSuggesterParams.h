/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SFPeopleSuggesterParams : NSObject <NSSecureCoding> {

	unsigned _flags;
	unsigned _maxPeople;
	NSArray* _contactIDs;

}

@property (nonatomic,copy) NSArray * contactIDs;              //@synthesize contactIDs=_contactIDs - In the implementation block
@property (assign,nonatomic) unsigned flags;                  //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned maxPeople;              //@synthesize maxPeople=_maxPeople - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(NSArray *)contactIDs;
-(void)setContactIDs:(NSArray *)arg1 ;
-(unsigned)maxPeople;
-(void)setMaxPeople:(unsigned)arg1 ;
@end

