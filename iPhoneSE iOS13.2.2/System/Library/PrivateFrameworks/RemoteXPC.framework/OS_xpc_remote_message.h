/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface OS_xpc_remote_message : NSObject {

	unsigned long long msg_id;
	/*^block*/id barrier;
	NSObject*<OS_dispatch_data> body;
	/*^block*/id reply_handler;
	NSObject*<OS_dispatch_queue> reply_queue;
	int ool_length;
	NSObject*<OS_xpc_object> ool[16];
	OS_xpc_remote_message* link_stqe_next;

}
@end
