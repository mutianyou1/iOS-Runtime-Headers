/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKProtobufConverting.h>

@class NSDictionary, NSString;

@interface _DKProtobufMetadata : NSObject <_DKProtobufConverting> {

	NSDictionary* _dictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(id)fromPBCodable:(id)arg1 ;
+(id)createFromData:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(id)toPBCodable;
-(id)asData;
@end

