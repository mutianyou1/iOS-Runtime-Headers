/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@class NSMutableData, NSString;

@interface SFUMemoryOutputStream : NSObject <SFUOutputStream> {

	NSMutableData* mData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)close;
-(long long)offset;
-(id)inputStream;
-(BOOL)canSeek;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
@end
