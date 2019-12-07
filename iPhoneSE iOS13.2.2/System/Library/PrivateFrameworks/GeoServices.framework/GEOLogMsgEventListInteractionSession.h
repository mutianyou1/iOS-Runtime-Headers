/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOLogMsgEventListInteractionSession : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _listResultItems;
	NSString* _searchString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _listType;
	struct {
		unsigned has_listType : 1;
		unsigned read_listResultItems : 1;
		unsigned read_searchString : 1;
		unsigned wrote_listResultItems : 1;
		unsigned wrote_searchString : 1;
		unsigned wrote_listType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasListType; 
@property (assign,nonatomic) int listType; 
@property (nonatomic,retain) NSMutableArray * listResultItems; 
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
+(BOOL)isValid:(id)arg1 ;
+(Class)listResultItemType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readSearchString;
-(BOOL)hasSearchString;
-(int)listType;
-(void)setListType:(int)arg1 ;
-(void)setHasListType:(BOOL)arg1 ;
-(BOOL)hasListType;
-(id)listTypeAsString:(int)arg1 ;
-(int)StringAsListType:(id)arg1 ;
-(void)_readListResultItems;
-(void)_addNoFlagsListResultItem:(id)arg1 ;
-(unsigned long long)listResultItemsCount;
-(void)clearListResultItems;
-(id)listResultItemAtIndex:(unsigned long long)arg1 ;
-(void)addListResultItem:(id)arg1 ;
-(NSMutableArray *)listResultItems;
-(void)setListResultItems:(NSMutableArray *)arg1 ;
@end
