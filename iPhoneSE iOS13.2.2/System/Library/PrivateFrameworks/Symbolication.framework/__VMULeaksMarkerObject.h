/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface __VMULeaksMarkerObject : NSObject {

	SCD_Struct_VM9* _region;
	unsigned _entryIndex;

}

@property (assign,nonatomic) SCD_Struct_VM9* region;              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned entryIndex;                 //@synthesize entryIndex=_entryIndex - In the implementation block
-(void)dealloc;
-(SCD_Struct_VM9*)region;
-(void)setRegion:(SCD_Struct_VM9*)arg1 ;
-(unsigned)entryIndex;
-(void)setEntryIndex:(unsigned)arg1 ;
@end

