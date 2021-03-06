/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NNMKMailboxItem <NSObject>
@property (nonatomic,retain) NSString * subject; 
@property (nonatomic,retain) NSString * preview; 
@property (assign,nonatomic) unsigned long long status; 
@required
-(unsigned long long)status;
-(NSString *)subject;
-(void)setSubject:(id)arg1;
-(void)setStatus:(unsigned long long)arg1;
-(NSString *)preview;
-(void)setPreview:(id)arg1;
-(void)addState:(unsigned long long)arg1;
-(void)removeState:(unsigned long long)arg1;
-(BOOL)checkState:(unsigned long long)arg1;

@end

