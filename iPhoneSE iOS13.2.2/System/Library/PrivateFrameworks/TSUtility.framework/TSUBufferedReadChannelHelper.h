/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUStreamReadChannel.h>

@class TSUBufferedReadChannel, NSString;

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel> {

	TSUBufferedReadChannel* _bufferedReadChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithBufferedReadChannel:(id)arg1 ;
@end
