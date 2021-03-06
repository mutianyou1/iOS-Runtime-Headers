/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUIdentifiable.h>

@class NUIdentifier, NUCompositionSchema, NSDictionary, NSString;

@interface NUComposition : NSObject <NUIdentifiable> {

	NUIdentifier* _identifier;
	NUCompositionSchema* _schema;
	long long _mediaType;

}

@property (nonatomic,readonly) NSDictionary * contents; 
@property (nonatomic,readonly) NUCompositionSchema * schema;              //@synthesize schema=_schema - In the implementation block
@property (assign,nonatomic) long long mediaType;                         //@synthesize mediaType=_mediaType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NUIdentifier * identifier;                 //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NUIdentifier *)identifier;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSDictionary *)contents;
-(id)initWithIdentifier:(id)arg1 ;
-(NUCompositionSchema *)schema;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(id)initWithCompositionSchema:(id)arg1 ;
-(BOOL)isEqualToComposition:(id)arg1 ;
@end

