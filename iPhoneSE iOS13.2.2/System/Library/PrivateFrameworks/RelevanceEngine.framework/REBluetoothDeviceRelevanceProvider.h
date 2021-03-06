/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REBluetoothDeviceRelevanceProvider : RERelevanceProvider {

	BOOL _connectedToCar;
	BOOL _connectedToSpeaker;

}

@property (nonatomic,readonly) BOOL connectedToCar;                  //@synthesize connectedToCar=_connectedToCar - In the implementation block
@property (nonatomic,readonly) BOOL connectedToSpeaker;              //@synthesize connectedToSpeaker=_connectedToSpeaker - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(BOOL)connectedToCar;
-(id)dictionaryEncoding;
-(id)initWithConnectionToCar:(BOOL)arg1 connectionToSpeaker:(BOOL)arg2 ;
-(BOOL)connectedToSpeaker;
@end

