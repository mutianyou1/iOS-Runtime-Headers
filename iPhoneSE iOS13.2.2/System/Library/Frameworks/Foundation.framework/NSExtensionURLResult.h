/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <Foundation/Foundation-Structs.h>
@class NSObject, NSURL;

@interface NSExtensionURLResult : NSObject {

	NSObject*<OS_dispatch_semaphore> _sema;
	NSURL* _url;
	os_unfair_lock_s _lock;

}

@property (setter=setURL:,copy) NSURL * url; 
-(id)init;
-(void)dealloc;
-(void)signal;
-(NSURL *)url;
-(id)copiedURL;
-(void)setURL:(id)arg1 ;
-(BOOL)wait:(double)arg1 ;
@end
