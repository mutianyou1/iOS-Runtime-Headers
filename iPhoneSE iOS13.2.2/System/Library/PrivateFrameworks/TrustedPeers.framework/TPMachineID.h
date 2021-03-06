/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface TPMachineID : NSObject {

	NSString* _machineID;
	unsigned long long _status;
	NSDate* _modified;

}

@property (readonly) NSString * machineID;                   //@synthesize machineID=_machineID - In the implementation block
@property (readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (readonly) NSDate * modified;                      //@synthesize modified=_modified - In the implementation block
-(id)description;
-(unsigned long long)status;
-(NSDate *)modified;
-(NSString *)machineID;
-(id)initWithMachineID:(id)arg1 status:(unsigned long long)arg2 modified:(id)arg3 ;
@end

