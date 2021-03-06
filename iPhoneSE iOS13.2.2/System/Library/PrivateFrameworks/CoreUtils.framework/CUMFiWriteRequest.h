/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CUMFiWriteRequest : NSObject {

	CUMFiWriteRequest* next;
	NSData* _data;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;                //@synthesize completion=_completion - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

