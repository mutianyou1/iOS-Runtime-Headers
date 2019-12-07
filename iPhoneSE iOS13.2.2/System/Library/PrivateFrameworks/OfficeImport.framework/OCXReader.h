/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDEncryptedReader.h>

@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {

	OCPZipPackage* mZipPackage;
	const void* mDataBytes;

}

@property (nonatomic,retain) OCPZipPackage * zipPackage; 
-(BOOL)start;
-(id)read;
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(BOOL)isBinaryReader;
-(OCPZipPackage *)zipPackage;
-(void)setZipPackage:(OCPZipPackage *)arg1 ;
-(BOOL)verifyFileFormat;
-(void)restartReaderToUseDecryptedDocument;
@end
