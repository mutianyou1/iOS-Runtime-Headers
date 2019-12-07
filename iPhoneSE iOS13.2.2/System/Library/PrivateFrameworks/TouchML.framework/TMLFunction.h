/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLModelSerialize.h>

@class NSString;

@interface TMLFunction : NSObject <TMLModelSerialize> {

	NSString* _functionName;
	NSString* _functionBody;

}

@property (nonatomic,readonly) NSString * functionName;              //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) NSString * functionBody;              //@synthesize functionBody=_functionBody - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decode:(const ProtobufCMessage*)arg1 ;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(NSString *)functionName;
-(id)initWithName:(id)arg1 body:(id)arg2 ;
-(NSString *)functionBody;
@end
