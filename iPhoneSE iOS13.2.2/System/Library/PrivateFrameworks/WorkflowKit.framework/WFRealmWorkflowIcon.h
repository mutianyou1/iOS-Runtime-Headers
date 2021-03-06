/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, RLMLinkingObjects;

@interface WFRealmWorkflowIcon : RLMObject <NSCopying> {

	long long _backgroundColorValue;
	long long _glyphNumber;
	NSData* _customImageData;
	RLMLinkingObjects* _workflows;

}

@property (assign,nonatomic) long long backgroundColorValue;              //@synthesize backgroundColorValue=_backgroundColorValue - In the implementation block
@property (assign,nonatomic) long long glyphNumber;                       //@synthesize glyphNumber=_glyphNumber - In the implementation block
@property (nonatomic,copy) NSData * customImageData;                      //@synthesize customImageData=_customImageData - In the implementation block
@property (readonly) RLMLinkingObjects * workflows;                       //@synthesize workflows=_workflows - In the implementation block
+(id)className;
+(id)requiredProperties;
+(id)defaultPropertyValues;
+(id)linkingObjectsProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RLMLinkingObjects *)workflows;
-(NSData *)customImageData;
-(void)setCustomImageData:(NSData *)arg1 ;
-(long long)backgroundColorValue;
-(void)setGlyphNumber:(long long)arg1 ;
-(void)setBackgroundColorValue:(long long)arg1 ;
-(long long)glyphNumber;
@end

