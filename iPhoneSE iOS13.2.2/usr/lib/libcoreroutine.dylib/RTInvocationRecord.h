/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RTInvocationRecord : NSObject <NSCopying> {

	/*^block*/id _block;
	/*^block*/id _failureBlock;
	NSString* _invocationDescription;

}

@property (nonatomic,copy) id block;                                      //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) id failureBlock;                               //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy) NSString * invocationDescription;              //@synthesize invocationDescription=_invocationDescription - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invoke;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(void)invokeFailure;
-(NSString *)invocationDescription;
-(void)setInvocationDescription:(NSString *)arg1 ;
@end
