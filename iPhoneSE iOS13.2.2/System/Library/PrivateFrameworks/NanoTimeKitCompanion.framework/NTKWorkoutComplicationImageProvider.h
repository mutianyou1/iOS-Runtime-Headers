/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <ClockKit/CLKImageProvider.h>

@interface NTKWorkoutComplicationImageProvider : CLKImageProvider {

	BOOL _paused;
	BOOL _frozen;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused;              //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;              //@synthesize frozen=_frozen - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPaused;
-(BOOL)isFrozen;
-(void)setPaused:(BOOL)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
@end

