/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FCFeedViewport, NSString, FCFeedDescriptor;


@protocol FCFeedViewportRemoveGroupOperationType <NSObject>
@property (nonatomic,copy) id<FCCoreConfiguration> configuration; 
@property (nonatomic,retain) FCFeedViewport * viewport; 
@property (nonatomic,retain) NSString * groupID; 
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor; 
@property (nonatomic,copy) id removeGroupCompletionHandler; 
@required
-(void)start;
-(void)setConfiguration:(id)arg1;
-(NSString *)groupID;
-(id<FCCoreConfiguration>)configuration;
-(void)setGroupID:(id)arg1;
-(FCFeedViewport *)viewport;
-(void)setViewport:(id)arg1;
-(FCFeedDescriptor *)feedDescriptor;
-(void)setFeedDescriptor:(id)arg1;
-(id)removeGroupCompletionHandler;
-(void)setRemoveGroupCompletionHandler:(/*^block*/id)arg1;

@end

