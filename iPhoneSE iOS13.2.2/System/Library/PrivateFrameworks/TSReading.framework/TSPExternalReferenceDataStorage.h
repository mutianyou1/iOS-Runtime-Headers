/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, NSData, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	NSData* _bookmarkData;
	TSPObjectContext* _context;

}

@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
-(id)initWithURL:(id)arg1 ;
-(BOOL)isReadable;
-(id)storageForDataCopyFromOtherContext;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithBookmarkData:(id)arg1 context:(id)arg2 ;
-(id)bookmarkDataForArchiver:(id)arg1 ;
@end
