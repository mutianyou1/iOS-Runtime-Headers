/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSDate;

@interface FCFeedGroupEmittingDateCursor : FCFeedGroupEmittingCursor {

	NSDate* _date;

}

@property (nonatomic,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
@end

