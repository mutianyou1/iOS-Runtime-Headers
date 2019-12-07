/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FCAccessCheckResult : NSObject <NSCopying> {

	BOOL _canAccess;
	unsigned long long _blockedReason;

}

@property (nonatomic,readonly) BOOL canAccess;                                //@synthesize canAccess=_canAccess - In the implementation block
@property (nonatomic,readonly) unsigned long long blockedReason;              //@synthesize blockedReason=_blockedReason - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCanAccess:(BOOL)arg1 blockedReason:(unsigned long long)arg2 ;
-(BOOL)canAccess;
-(unsigned long long)blockedReason;
@end
