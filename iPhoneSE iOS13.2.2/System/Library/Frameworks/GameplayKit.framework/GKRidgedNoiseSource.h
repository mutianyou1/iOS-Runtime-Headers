/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKCoherentNoiseSource.h>

@interface GKRidgedNoiseSource : GKCoherentNoiseSource {

	double m_weights[30];

}
+(id)ridgedNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 lacunarity:(double)arg3 seed:(int)arg4 ;
-(id)init;
-(double)valueAt:;
-(id)cloneModule;
-(id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 lacunarity:(double)arg3 seed:(int)arg4 ;
@end
