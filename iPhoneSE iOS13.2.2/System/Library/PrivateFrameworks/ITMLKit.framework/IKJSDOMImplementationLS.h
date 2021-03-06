/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKJSDOMImplementationLS <JSExport>
@property (getter=synchronousMode,readonly) long long MODE_SYNCHRONOUS; 
@property (getter=asynchronousMode,readonly) long long MODE_ASYNCHRONOUS; 
@required
-(long long)synchronousMode;
-(id)createLSParser:(long long)arg1 :(id)arg2;
-(id)createLSSerializer;
-(id)createLSInput;
-(long long)asynchronousMode;

@end

