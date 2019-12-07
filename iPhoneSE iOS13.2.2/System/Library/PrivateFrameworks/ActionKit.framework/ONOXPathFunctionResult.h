/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSNumber, NSString;

@interface ONOXPathFunctionResult : NSObject {

	xmlXPathObject* _xmlXPath;

}

@property (assign,nonatomic) xmlXPathObject* xmlXPath;                   //@synthesize xmlXPath=_xmlXPath - In the implementation block
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) double numericValue; 
@property (nonatomic,copy,readonly) NSNumber * numberValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
-(void)dealloc;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(double)numericValue;
-(NSNumber *)numberValue;
-(xmlXPathObject*)xmlXPath;
-(void)setXmlXPath:(xmlXPathObject*)arg1 ;
@end
