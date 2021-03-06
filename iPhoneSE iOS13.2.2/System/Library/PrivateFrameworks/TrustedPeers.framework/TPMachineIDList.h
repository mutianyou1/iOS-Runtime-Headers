/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TPMachineIDList : NSObject {

	NSArray* _entries;

}

@property (readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
-(id)description;
-(NSArray *)entries;
-(id)initWithEntries:(id)arg1 ;
-(id)entryFor:(id)arg1 ;
-(id)machineIDsInStatus:(unsigned long long)arg1 ;
@end

