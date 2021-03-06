/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNResult.h>

@class NSArray, NSString;

@interface SNClassificationResult : NSObject <SNTimeRangeProvidingWritable, SNResult> {

	NSArray* _classifications;
	SCD_Struct_SN4 _timeRange;

}

@property (nonatomic,copy) NSArray * classifications;               //@synthesize classifications=_classifications - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN4 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(id)_init;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(NSArray *)classifications;
-(void)setClassifications:(NSArray *)arg1 ;
@end

