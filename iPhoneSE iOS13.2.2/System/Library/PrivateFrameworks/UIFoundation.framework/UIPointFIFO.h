/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIPointFIFO : NSObject {

	UIPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)clear;
-(void)flush;
-(UIPointFIFO *)nextFIFO;
-(void)addPoint:;
-(void)emitPoint:;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(UIPointFIFO *)arg1 ;
@end
