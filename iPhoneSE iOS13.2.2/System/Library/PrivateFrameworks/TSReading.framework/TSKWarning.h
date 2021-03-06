/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TSKWarning : NSObject {

	NSString* mMessage;
	NSArray* mInfos;
	unsigned mKind;
	int mSeverity;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSArray * infos; 
@property (nonatomic,readonly) unsigned kind; 
@property (nonatomic,readonly) int severity; 
+(id)warningWithMessage:(id)arg1 kind:(unsigned)arg2 severity:(int)arg3 infos:(id)arg4 ;
+(id)warningWithMessage:(id)arg1 kind:(unsigned)arg2 infos:(id)arg3 ;
+(id)warningWithMessage:(id)arg1 severity:(int)arg2 ;
+(id)warningWithMessage:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)kind;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)infos;
-(void)setInfos:(NSArray *)arg1 ;
-(int)severity;
-(id)initWithMessage:(id)arg1 kind:(unsigned)arg2 severity:(int)arg3 infos:(id)arg4 ;
@end

