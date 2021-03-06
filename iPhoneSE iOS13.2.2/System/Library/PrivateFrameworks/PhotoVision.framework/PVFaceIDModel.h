/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PVFaceIDModel : NSObject
+(id)defaultConfiguration;
+(id)modelFileName;
+(id)loadModelAtPath:(id)arg1 error:(id*)arg2 ;
+(id)classifyFaceObservation:(id)arg1 withModel:(id)arg2 error:(id*)arg3 ;
+(id)faceObservationFromFaceprintData:(id)arg1 ;
+(BOOL)addFaceObservations:(id)arg1 forPersonIdentifier:(id)arg2 toModel:(id)arg3 error:(id*)arg4 ;
+(id)newMutablePersonsModel;
+(BOOL)persistModel:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
@end

