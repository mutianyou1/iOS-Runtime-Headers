/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLBatchProvider.h>

@protocol MLBatchProvider;
@interface MLShufflingBatchProvider : NSObject <MLBatchProvider> {

	vector<long, std::__1::allocator<long> >* indices;
	linear_congruential_engine<unsigned int, 48271, 0, 2147483647> randomNumberGenerator;
	id<MLBatchProvider> _batchProvider;

}

@property (retain) id<MLBatchProvider> batchProvider;              //@synthesize batchProvider=_batchProvider - In the implementation block
@property (nonatomic,readonly) long long count; 
-(long long)count;
-(void)shuffle;
-(id)featuresAtIndex:(long long)arg1 ;
-(id<MLBatchProvider>)batchProvider;
-(id)initWithBatchProvider:(id)arg1 seed:(id)arg2 ;
-(void)setBatchProvider:(id<MLBatchProvider>)arg1 ;
@end

