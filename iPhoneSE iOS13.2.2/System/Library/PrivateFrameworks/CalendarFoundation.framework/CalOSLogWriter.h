/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalLogWriter.h>

@protocol OS_os_log;
@class NSObject;

@interface CalOSLogWriter : CalLogWriter {

	NSObject*<OS_os_log> CalOSLogClient;

}
+(id)autoLogNamespaces;
-(id)initWithParameters:(id)arg1 ;
-(void)write:(id)arg1 ;
-(void)_configureOSLogClient;
-(void)_configureAutoLogNamespaces;
-(void)_logStringInChunks:(id)arg1 ;
-(unsigned long long)_indexToSplitOnForIndex:(unsigned long long)arg1 chunkBytes:(const char*)arg2 ;
@end

