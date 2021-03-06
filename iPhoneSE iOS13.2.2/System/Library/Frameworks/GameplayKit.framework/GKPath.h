/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKPath : NSObject {

	PolylinePathway* _pathway;

}

@property (assign,nonatomic) float radius; 
@property (readonly) unsigned long long numPoints; 
@property (assign,getter=isCyclical,nonatomic) BOOL cyclical; 
+(id)pathWithPoints:(1*)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4 ;
+(id)pathWithGraphNodes:(id)arg1 radius:(float)arg2 ;
+(id)pathWithFloat3Points:(1*)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4 ;
-(float)radius;
-(void)setRadius:(float)arg1 ;
-(2)pointAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numPoints;
-(PolylinePathway*)pathway;
-(void)set_cyclical:(BOOL)arg1 ;
-(BOOL)_cyclical;
-(BOOL)isCyclical;
-(id)initWithPoints:(1*)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4 ;
-(id)initWithGraphNodes:(id)arg1 radius:(float)arg2 ;
-(id)initWithFloat3Points:(1*)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4 ;
-(void)setCyclical:(BOOL)arg1 ;
-(2)float2AtIndex:(unsigned long long)arg1 ;
-(2)float3AtIndex:(unsigned long long)arg1 ;
@end

