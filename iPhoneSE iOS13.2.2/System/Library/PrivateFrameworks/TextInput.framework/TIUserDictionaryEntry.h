/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol TIUserDictionaryEntry <NSObject>
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) NSNumber * timestamp; 
@required
-(NSNumber *)timestamp;
-(void)setTimestamp:(id)arg1;
-(NSString *)phrase;
-(void)setPhrase:(id)arg1;
-(NSString *)shortcut;
-(void)setShortcut:(id)arg1;

@end
