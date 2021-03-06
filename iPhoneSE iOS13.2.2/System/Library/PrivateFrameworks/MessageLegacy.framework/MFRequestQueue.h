/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSMutableArray, NSString;

@interface MFRequestQueue : NSObject <EFLoggable> {

	os_unfair_lock_s _lock;
	NSMutableArray* _requestPairs;

}

@property (nonatomic,retain) NSMutableArray * requestPairs;              //@synthesize requestPairs=_requestPairs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)signpostLog;
-(id)init;
-(BOOL)addRequest:(EFPair*)arg1 ;
-(unsigned long long)signpostID;
-(BOOL)addRequests:(id)arg1 ;
-(BOOL)processRequests:(id)arg1 ;
-(BOOL)_processRequests:(id)arg1 ;
-(BOOL)processRequest:(EFPair*)arg1 ;
-(NSMutableArray *)requestPairs;
-(void)setRequestPairs:(NSMutableArray *)arg1 ;
@end

