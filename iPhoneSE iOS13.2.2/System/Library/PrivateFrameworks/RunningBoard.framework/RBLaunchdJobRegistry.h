/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RunningBoard/RunningBoard-Structs.h>
@class NSMutableDictionary, NSSet;

@interface RBLaunchdJobRegistry : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _identityToJobMap;

}

@property (nonatomic,copy,readonly) NSSet * jobs; 
+(BOOL)_deleteJobLabel:(id)arg1 error:(out id*)arg2 ;
+(void)_queryJobsWithBlock:(/*^block*/id)arg1 ;
+(BOOL)_submitJob:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(NSSet *)jobs;
-(id)synchronizeJobs;
-(BOOL)deleteJob:(id)arg1 error:(out id*)arg2 ;
-(id)createJobIfNecessaryForIdentity:(id)arg1 withContext:(id)arg2 error:(out id*)arg3 ;
-(id)jobForIdentifier:(id)arg1 ;
-(id)jobForIdentity:(id)arg1 ;
@end

