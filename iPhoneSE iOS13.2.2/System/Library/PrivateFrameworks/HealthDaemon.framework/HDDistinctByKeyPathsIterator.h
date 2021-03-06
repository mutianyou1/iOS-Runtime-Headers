/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSampleIterator.h>
#import <libobjc.A.dylib/HDRestorableIterator.h>

@protocol HDSampleIteratorHDRestorableIterator;
@class NSArray, NSMutableSet, NSString, HKSample;

@interface HDDistinctByKeyPathsIterator : NSObject <HDSampleIterator, HDRestorableIterator> {

	id<HDSampleIterator><HDRestorableIterator> _sourceIterator;
	NSArray* _keyPaths;
	NSMutableSet* _seenValues;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HKSample * sample; 
@property (nonatomic,readonly) long long objectID; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(long long)objectID;
-(HKSample *)sample;
-(BOOL)advanceWithError:(id*)arg1 ;
-(BOOL)restoreIteratorStateFromData:(id)arg1 error:(id*)arg2 ;
-(id)iteratorStateData;
-(id)initWithSourceIterator:(id)arg1 keyPaths:(id)arg2 ;
@end

