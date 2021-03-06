/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary;

@interface RBProcessStateChangeSet : NSObject <NSFastEnumeration> {

	NSMutableDictionary* _stateChangesByIdentity;

}

@property (nonatomic,readonly) BOOL hasChanges; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RB3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithChanges:(id)arg1 ;
-(BOOL)hasChanges;
-(void)applyChanges:(id)arg1 ;
-(id)processStateChangeForIdentity:(id)arg1 ;
-(void)_diffOriginalStatesByIdentity:(id)arg1 withUpdatedStatesByIdentity:(id)arg2 ;
-(id)initWithOriginalStatesByIdentity:(id)arg1 updatedStatesByIdentity:(id)arg2 ;
-(id)processIdentities;
@end

