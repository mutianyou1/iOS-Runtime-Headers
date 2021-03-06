/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBRecordBase, NSMutableArray;

@interface NTPBPurchaseLookupRecord : PBCodable <NSCopying> {

	NSString* _appAdamID;
	NTPBRecordBase* _base;
	NSMutableArray* _bundleChannelTagIDs;
	NSMutableArray* _channelTagIDs;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                             //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasAppAdamID; 
@property (nonatomic,retain) NSString * appAdamID;                              //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelTagIDs;                    //@synthesize channelTagIDs=_channelTagIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * bundleChannelTagIDs;              //@synthesize bundleChannelTagIDs=_bundleChannelTagIDs - In the implementation block
+(Class)channelTagIDsType;
+(Class)bundleChannelTagIDsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NTPBRecordBase *)base;
-(NSString *)appAdamID;
-(NSMutableArray *)channelTagIDs;
-(void)setAppAdamID:(NSString *)arg1 ;
-(void)setChannelTagIDs:(NSMutableArray *)arg1 ;
-(void)setBundleChannelTagIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)bundleChannelTagIDs;
-(BOOL)hasBase;
-(void)addChannelTagIDs:(id)arg1 ;
-(void)addBundleChannelTagIDs:(id)arg1 ;
-(BOOL)hasAppAdamID;
-(void)clearChannelTagIDs;
-(unsigned long long)channelTagIDsCount;
-(id)channelTagIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearBundleChannelTagIDs;
-(unsigned long long)bundleChannelTagIDsCount;
-(id)bundleChannelTagIDsAtIndex:(unsigned long long)arg1 ;
@end

