/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, NSArray;


@protocol ECLabelChangeMessageActionBuilder <ECLocalMessageActionBuilder>
@property (nonatomic,copy) NSSet * remoteIDs; 
@property (nonatomic,copy) NSArray * messages; 
@property (nonatomic,copy) NSSet * labelsToAdd; 
@property (nonatomic,copy) NSSet * labelsToRemove; 
@required
-(NSArray *)messages;
-(void)setMessages:(id)arg1;
-(NSSet *)remoteIDs;
-(void)setRemoteIDs:(id)arg1;
-(NSSet *)labelsToAdd;
-(NSSet *)labelsToRemove;
-(void)setLabelsToAdd:(id)arg1;
-(void)setLabelsToRemove:(id)arg1;

@end
