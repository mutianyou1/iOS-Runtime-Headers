/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBTodaySectionConfigArticle, NTPBTodaySectionConfigWebEmbed;

@interface NTPBTodaySectionConfigItem : PBCodable <NSCopying> {

	NTPBTodaySectionConfigArticle* _article;
	int _itemType;
	NTPBTodaySectionConfigWebEmbed* _webEmbed;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasItemType; 
@property (assign,nonatomic) int itemType;                                           //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) BOOL hasArticle; 
@property (nonatomic,retain) NTPBTodaySectionConfigArticle * article;                //@synthesize article=_article - In the implementation block
@property (nonatomic,readonly) BOOL hasWebEmbed; 
@property (nonatomic,retain) NTPBTodaySectionConfigWebEmbed * webEmbed;              //@synthesize webEmbed=_webEmbed - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)itemType;
-(void)setItemType:(int)arg1 ;
-(BOOL)hasItemType;
-(void)setHasItemType:(BOOL)arg1 ;
-(NTPBTodaySectionConfigArticle *)article;
-(void)setArticle:(NTPBTodaySectionConfigArticle *)arg1 ;
-(void)setWebEmbed:(NTPBTodaySectionConfigWebEmbed *)arg1 ;
-(BOOL)hasArticle;
-(BOOL)hasWebEmbed;
-(NTPBTodaySectionConfigWebEmbed *)webEmbed;
@end
