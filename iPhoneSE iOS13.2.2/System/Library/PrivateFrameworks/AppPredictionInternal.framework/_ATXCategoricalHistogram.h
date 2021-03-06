/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface _ATXCategoricalHistogram : NSObject <NSSecureCoding> {

	unsigned _count;
	unsigned _capacity;
	SCD_Struct_AT5* _entries;
	NSDictionary* _lastDates;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)enumerate:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)getLastDatesByCategoryId;
@end

