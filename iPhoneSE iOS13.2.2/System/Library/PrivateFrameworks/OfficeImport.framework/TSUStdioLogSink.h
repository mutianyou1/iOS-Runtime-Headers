/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSObject, NSDateFormatter;

@interface TSUStdioLogSink : NSObject {

	NSObject*<OS_dispatch_queue> _logQueue;
	NSDateFormatter* _dateFormatter;

}
+(id)sharedInstance;
-(id)init;
-(/*^block*/id)logSinkBlockWithFilePointer:(_sFILE*)arg1 ;
@end
