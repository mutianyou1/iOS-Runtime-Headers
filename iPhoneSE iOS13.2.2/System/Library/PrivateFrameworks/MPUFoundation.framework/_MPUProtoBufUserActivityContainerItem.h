/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPMultiverseIdentifier;

@interface _MPUProtoBufUserActivityContainerItem : PBCodable <NSCopying> {

	int _containerItemType;
	MIPMultiverseIdentifier* _selectedMultiverseIdentifier;
	MIPMultiverseIdentifier* _visualReferenceMultiverseIdentifier;
	SCD_Struct_MP5 _has;

}

@property (assign,nonatomic) BOOL hasContainerItemType; 
@property (assign,nonatomic) int containerItemType;                                                      //@synthesize containerItemType=_containerItemType - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedMultiverseIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * selectedMultiverseIdentifier;                     //@synthesize selectedMultiverseIdentifier=_selectedMultiverseIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasVisualReferenceMultiverseIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * visualReferenceMultiverseIdentifier;              //@synthesize visualReferenceMultiverseIdentifier=_visualReferenceMultiverseIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSelectedMultiverseIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setVisualReferenceMultiverseIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(int)containerItemType;
-(void)setContainerItemType:(int)arg1 ;
-(void)setHasContainerItemType:(BOOL)arg1 ;
-(BOOL)hasContainerItemType;
-(BOOL)hasSelectedMultiverseIdentifier;
-(BOOL)hasVisualReferenceMultiverseIdentifier;
-(MIPMultiverseIdentifier *)selectedMultiverseIdentifier;
-(MIPMultiverseIdentifier *)visualReferenceMultiverseIdentifier;
@end

