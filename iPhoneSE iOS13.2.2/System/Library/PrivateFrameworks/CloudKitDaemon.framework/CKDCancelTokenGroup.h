/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDCancelling.h>

@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling> {

	NSMutableArray* _cancelTokens;

}

@property (nonatomic,retain) NSMutableArray * cancelTokens;              //@synthesize cancelTokens=_cancelTokens - In the implementation block
-(id)init;
-(void)cancel;
-(NSMutableArray *)cancelTokens;
-(void)setCancelTokens:(NSMutableArray *)arg1 ;
-(void)removeAllCancelTokens;
-(void)addCancelToken:(id)arg1 withOperation:(id)arg2 ;
-(void)removeCancelToken:(id)arg1 ;
@end

