/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSBlockSentinelSignalContext.h>

@protocol BSBlockSentinelSignalContext <NSObject>
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (getter=isFailed,nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) id context; 
@required
-(id)context;
-(BOOL)isComplete;
-(BOOL)isFailed;

@end


@class NSString;

@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext> {

	BOOL _complete;
	BOOL _failed;
	id _context;

}

@property (assign,getter=isComplete,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (assign,getter=isFailed,nonatomic) BOOL failed;                  //@synthesize failed=_failed - In the implementation block
@property (assign,nonatomic,__weak) id context;                            //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)context;
+(id)failureContext;
-(id)context;
-(void)setContext:(id)arg1 ;
-(BOOL)isComplete;
-(BOOL)isFailed;
-(void)setFailed:(BOOL)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
@end

