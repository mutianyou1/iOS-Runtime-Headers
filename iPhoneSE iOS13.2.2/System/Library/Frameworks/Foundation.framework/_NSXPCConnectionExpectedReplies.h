/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionExpectedReplies : NSObject {

	CFDictionaryRef _replyTable;
	opaque_pthread_mutex_t _lock;
	unsigned long long _sequence;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)sequenceForProgress:(id)arg1 ;
-(void)removeProgressSequence:(unsigned long long)arg1 ;
-(id)progressForSequence:(unsigned long long)arg1 ;
@end

