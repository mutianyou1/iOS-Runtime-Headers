/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol ECIMAPServerMessageBuilder <ECBaseServerMessageBuilderProtocol>
@property (assign,nonatomic) unsigned imapUID; 
@property (nonatomic,copy) NSSet * labels; 
@required
-(NSSet *)labels;
-(void)setLabels:(id)arg1;
-(unsigned)imapUID;
-(void)setImapUID:(unsigned)arg1;

@end
