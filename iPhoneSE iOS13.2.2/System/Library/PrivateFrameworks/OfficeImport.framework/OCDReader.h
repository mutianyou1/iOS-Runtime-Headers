/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TCCancelDelegate, OCDReaderDelegate;
@class NSString, NSData, NSError;

@interface OCDReader : NSObject {

	id<TCCancelDelegate> mCancelDelegate;
	BOOL mIsThumbnail;
	NSString* mFileName;
	NSData* mData;
	NSError* mStartError;
	id<OCDReaderDelegate> _delegate;

}

@property (nonatomic,retain) NSString * fileName; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSError * startError; 
@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (assign,nonatomic,__weak) id<OCDReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isThumbnail; 
-(id<OCDReaderDelegate>)delegate;
-(void)setDelegate:(id<OCDReaderDelegate>)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(BOOL)start;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)isThumbnail;
-(id)read;
-(void)setIsThumbnail:(BOOL)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 ;
-(BOOL)isBinaryReader;
-(NSError *)startError;
-(BOOL)verifyFileFormat;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(void)setStartError:(NSError *)arg1 ;
-(void)setStartErrorMessageFromException:(id)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
@end

