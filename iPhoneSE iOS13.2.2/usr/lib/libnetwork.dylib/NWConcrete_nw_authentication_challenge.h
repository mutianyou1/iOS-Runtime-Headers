/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_authentication_challenge.h>

@class NWConcrete_nw_authentication_protection_space, NSString;

@interface NWConcrete_nw_authentication_challenge : NSObject <OS_nw_authentication_challenge> {

	NWConcrete_nw_authentication_protection_space* protection_space;
	void* http_message;
	int type;
	unsigned attempt_count;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
@end
