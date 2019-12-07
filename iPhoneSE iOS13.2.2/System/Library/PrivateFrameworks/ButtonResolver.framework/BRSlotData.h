/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ButtonResolver/ButtonResolver-Structs.h>
@class NSNumber, BRAsset;

@interface BRSlotData : NSObject {

	BOOL _isProgrammed;
	NSNumber* _slot;
	BRAsset* _asset;
	unsigned long long _refCount;

}

@property (nonatomic,copy) NSNumber * slot;                            //@synthesize slot=_slot - In the implementation block
@property (nonatomic,retain) BRAsset * asset;                          //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL isProgrammed;                        //@synthesize isProgrammed=_isProgrammed - In the implementation block
@property (assign,nonatomic) unsigned long long refCount;              //@synthesize refCount=_refCount - In the implementation block
@property (nonatomic,readonly) id propertyList; 
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)refCount;
-(id)propertyList;
-(BRAsset *)asset;
-(void)setAsset:(BRAsset *)arg1 ;
-(NSNumber *)slot;
-(void)setSlot:(NSNumber *)arg1 ;
-(void)setRefCount:(unsigned long long)arg1 ;
-(BOOL)isProgrammed;
-(id)initWithSlotData:(id)arg1 ;
-(void)setIsProgrammed:(BOOL)arg1 ;
@end
