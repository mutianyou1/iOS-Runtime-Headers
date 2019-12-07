/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookUtility/BUZipArchive.h>

@class BUZipArchive, BUZipEntry;

@interface BUContainedZipArchive : BUZipArchive {

	BUZipArchive* _zipArchive;
	BUZipEntry* _entry;

}
+(id)zipArchiveFromEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)isValid;
-(unsigned long long)archiveLength;
-(id)newArchiveReadChannel;
-(id)readChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(id)streamReadChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(id)initWithEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 ;
@end
