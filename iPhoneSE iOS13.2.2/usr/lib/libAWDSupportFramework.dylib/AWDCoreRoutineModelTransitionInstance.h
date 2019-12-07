/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineTransitionMotionType, NSString;

@interface AWDCoreRoutineModelTransitionInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned _distance;
	unsigned _duration;
	AWDCoreRoutineTransitionMotionType* _transitionHistogram;
	SCD_Struct_AW3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                                     //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitionHistogram; 
@property (nonatomic,retain) AWDCoreRoutineTransitionMotionType * transitionHistogram;              //@synthesize transitionHistogram=_transitionHistogram - In the implementation block
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(BOOL)hasDuration;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setTransitionHistogram:(AWDCoreRoutineTransitionMotionType *)arg1 ;
-(BOOL)hasTransitionHistogram;
-(AWDCoreRoutineTransitionMotionType *)transitionHistogram;
@end
