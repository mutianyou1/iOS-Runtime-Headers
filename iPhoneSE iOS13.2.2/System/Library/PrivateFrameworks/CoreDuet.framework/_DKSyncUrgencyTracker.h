/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _DKSyncUrgencyTracker : NSObject {

	unsigned long long _urgency;
	NSMutableDictionary* _urgencies;

}
+(id)sharedInstance;
-(unsigned long long)currentUrgency;
-(void)updateUrgency:(unsigned long long)arg1 forClient:(id)arg2 ;
-(void)ageUrgencies;
-(id)allUrgencies;
-(void)recomputeUrgency;
-(unsigned long long)urgencyForClient:(id)arg1 ;
@end

