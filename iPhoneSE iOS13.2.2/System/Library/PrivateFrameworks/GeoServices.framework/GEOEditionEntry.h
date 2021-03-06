/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOEditionEntry : NSObject {

	unsigned _tileset;
	unsigned _edition;
	unsigned _provider;
	BOOL _invalidateOnly;

}

@property (assign,nonatomic) unsigned tileset;                 //@synthesize tileset=_tileset - In the implementation block
@property (assign,nonatomic) unsigned edition;                 //@synthesize edition=_edition - In the implementation block
@property (assign,nonatomic) unsigned provider;                //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) BOOL invalidateOnly;              //@synthesize invalidateOnly=_invalidateOnly - In the implementation block
-(void)setProvider:(unsigned)arg1 ;
-(unsigned)provider;
-(unsigned)edition;
-(unsigned)tileset;
-(void)setTileset:(unsigned)arg1 ;
-(void)setEdition:(unsigned)arg1 ;
-(BOOL)invalidateOnly;
-(void)setInvalidateOnly:(BOOL)arg1 ;
@end

