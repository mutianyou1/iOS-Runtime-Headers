/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKTiledLayoutGeneratorScanState : NSObject {

	BOOL _scannedBatchHasCaption;
	long long _scanLocation;
	id _scannedBatchID;
	long long _scanSpecialSequenceCount;

}

@property (assign,nonatomic) long long scanLocation;                          //@synthesize scanLocation=_scanLocation - In the implementation block
@property (nonatomic,retain) id scannedBatchID;                               //@synthesize scannedBatchID=_scannedBatchID - In the implementation block
@property (assign,nonatomic) BOOL scannedBatchHasCaption;                     //@synthesize scannedBatchHasCaption=_scannedBatchHasCaption - In the implementation block
@property (assign,nonatomic) long long scanSpecialSequenceCount;              //@synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount - In the implementation block
-(long long)scanLocation;
-(void)setScanLocation:(long long)arg1 ;
-(BOOL)scannedBatchHasCaption;
-(long long)scanSpecialSequenceCount;
-(void)setScanSpecialSequenceCount:(long long)arg1 ;
-(void)setScannedBatchID:(id)arg1 ;
-(void)setScannedBatchHasCaption:(BOOL)arg1 ;
-(id)scannedBatchID;
@end

