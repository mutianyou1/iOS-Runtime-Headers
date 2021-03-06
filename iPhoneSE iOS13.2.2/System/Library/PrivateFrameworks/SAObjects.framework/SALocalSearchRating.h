/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchRating : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long count; 
@property (assign,nonatomic) double maxValue; 
@property (nonatomic,copy) NSString * providerId; 
@property (assign,nonatomic) double value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rating;
+(id)ratingWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)groupIdentifier;
-(NSString *)providerId;
-(void)setProviderId:(NSString *)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(id)encodedClassName;
@end

