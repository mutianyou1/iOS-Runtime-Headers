/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INHomeAttributeExport <NSObject,JSExport>
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long valueType; 
@property (assign,nonatomic) BOOL boolValue; 
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,copy) NSString * stringValue; 
@required
-(double)doubleValue;
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(void)setStringValue:(id)arg1;
-(void)setDoubleValue:(double)arg1;
-(long long)valueType;
-(void)setBoolValue:(BOOL)arg1;
-(void)setValueType:(long long)arg1;

@end
