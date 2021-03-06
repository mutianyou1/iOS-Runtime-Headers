/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@interface GPBDuration : GPBMessage

@property (assign,nonatomic) double timeInterval; 
@property (assign,nonatomic) double timeIntervalSince1970; 
@property (assign,nonatomic) long long seconds; 
@property (assign,nonatomic) int nanos; 
+(id)descriptor;
-(double)timeIntervalSince1970;
-(double)timeInterval;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
-(id)initWithTimeInterval:(double)arg1 ;
-(void)setTimeIntervalSince1970:(double)arg1 ;
@end

