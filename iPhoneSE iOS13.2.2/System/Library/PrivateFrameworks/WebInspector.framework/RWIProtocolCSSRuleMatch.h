/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolCSSRule, NSArray;

@interface RWIProtocolCSSRuleMatch : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolCSSRule * rule; 
@property (nonatomic,copy) NSArray * matchingSelectors; 
+(id)safe_initWithRule:(id)arg1 matchingSelectors:(id)arg2 ;
-(RWIProtocolCSSRule *)rule;
-(void)setMatchingSelectors:(NSArray *)arg1 ;
-(NSArray *)matchingSelectors;
-(void)setRule:(RWIProtocolCSSRule *)arg1 ;
-(id)initWithRule:(id)arg1 matchingSelectors:(id)arg2 ;
@end

