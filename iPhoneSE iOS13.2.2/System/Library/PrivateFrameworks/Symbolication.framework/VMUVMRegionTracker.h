/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol VMUStackLogReader;
@class NSMutableArray;

@interface VMUVMRegionTracker : NSObject <NSSecureCoding> {

	unsigned _task;
	id<VMUStackLogReader> _stackLogReader;
	NSMutableArray* _regionInfoArray;

}

@property (readonly) long long regionCount; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(long long)regionCount;
-(id)vmRegionRangeInfoForRange:(VMURange)arg1 ;
-(unsigned long long)handleStackLogType:(unsigned)arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 stackID:(unsigned long long)arg4 ;
-(unsigned long long)_regionIndexForAddress:(unsigned long long)arg1 ;
-(id)initWithTask:(unsigned)arg1 stackLogReader:(id)arg2 ;
-(void)convertStackIDs:(/*^block*/id)arg1 ;
@end

