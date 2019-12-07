/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteSetIconMessage, NSData, NSString, NSNumber, NSDate;

@interface NMRMediaRemoteSetIconMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteSetIconMessage* _protobuf;

}

@property (nonatomic,readonly) NSData * icon; 
@property (nonatomic,readonly) NSData * originalDigest; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4 ;
-(NSString *)bundleID;
-(NSData *)icon;
-(NSNumber *)originIdentifier;
-(NSDate *)serializationDate;
-(id)protobufData;
-(NSData *)originalDigest;
-(id)initWithProtobufData:(id)arg1 ;
-(id)_initWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4 ;
@end
