/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate;

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation {

	BOOL _extendsLeft;
	NSDate* _boundaryDate;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_start;
-(void)_cancel;
-(void)_extendLeft;
-(void)_extendRight;
-(void)_invokeHandlerWithEntries:(id)arg1 ;
-(void)setExtendsLeftFromDate:(id)arg1 ;
-(void)setExtendsRightFromDate:(id)arg1 ;
@end

