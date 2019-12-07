/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying> {

	NSMutableArray* _preapprovedKeys;
	NSData* _voucher;
	NSData* _voucherSignature;

}

@property (nonatomic,readonly) BOOL hasVoucher; 
@property (nonatomic,retain) NSData * voucher;                              //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,readonly) BOOL hasVoucherSignature; 
@property (nonatomic,retain) NSData * voucherSignature;                     //@synthesize voucherSignature=_voucherSignature - In the implementation block
@property (nonatomic,retain) NSMutableArray * preapprovedKeys;              //@synthesize preapprovedKeys=_preapprovedKeys - In the implementation block
+(Class)preapprovedKeysType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)voucher;
-(void)setVoucher:(NSData *)arg1 ;
-(BOOL)hasVoucher;
-(BOOL)hasVoucherSignature;
-(void)clearPreapprovedKeys;
-(void)addPreapprovedKeys:(id)arg1 ;
-(unsigned long long)preapprovedKeysCount;
-(id)preapprovedKeysAtIndex:(unsigned long long)arg1 ;
-(NSData *)voucherSignature;
-(void)setVoucherSignature:(NSData *)arg1 ;
-(NSMutableArray *)preapprovedKeys;
-(void)setPreapprovedKeys:(NSMutableArray *)arg1 ;
@end
