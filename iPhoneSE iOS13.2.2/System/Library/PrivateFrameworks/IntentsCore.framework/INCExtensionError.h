/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface INCExtensionError : NSObject {

	long long _errorCode;
	NSError* _underlyingError;

}

@property (assign,nonatomic) long long errorCode;                  //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy) NSError * underlyingError;              //@synthesize underlyingError=_underlyingError - In the implementation block
-(void)setUnderlyingError:(NSError *)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(NSError *)underlyingError;
-(id)initWithErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
@end

