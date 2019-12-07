/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSStyle;

@interface RWIProtocolCSSStyleAttribute : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) RWIProtocolCSSStyle * style; 
+(id)safe_initWithName:(id)arg1 style:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(RWIProtocolCSSStyle *)style;
-(void)setStyle:(RWIProtocolCSSStyle *)arg1 ;
-(id)initWithName:(id)arg1 style:(id)arg2 ;
@end
