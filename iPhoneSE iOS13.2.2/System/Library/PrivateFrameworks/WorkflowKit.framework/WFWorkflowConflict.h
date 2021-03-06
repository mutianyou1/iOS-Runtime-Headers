/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WFWorkflowRecord;

@interface WFWorkflowConflict : NSObject {

	NSString* _localWorkflowID;
	WFWorkflowRecord* _localWorkflowRecord;
	NSString* _remoteWorkflowID;
	WFWorkflowRecord* _remoteWorkflowRecord;

}

@property (nonatomic,copy) NSString * localWorkflowID;                             //@synthesize localWorkflowID=_localWorkflowID - In the implementation block
@property (nonatomic,retain) WFWorkflowRecord * localWorkflowRecord;               //@synthesize localWorkflowRecord=_localWorkflowRecord - In the implementation block
@property (nonatomic,copy) NSString * remoteWorkflowID;                            //@synthesize remoteWorkflowID=_remoteWorkflowID - In the implementation block
@property (nonatomic,retain) WFWorkflowRecord * remoteWorkflowRecord;              //@synthesize remoteWorkflowRecord=_remoteWorkflowRecord - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)localWorkflowID;
-(void)setLocalWorkflowID:(NSString *)arg1 ;
-(NSString *)remoteWorkflowID;
-(void)setRemoteWorkflowID:(NSString *)arg1 ;
-(id)resolutionKeepingLocal:(BOOL)arg1 keepingRemote:(BOOL)arg2 ;
-(WFWorkflowRecord *)localWorkflowRecord;
-(void)setLocalWorkflowRecord:(WFWorkflowRecord *)arg1 ;
-(WFWorkflowRecord *)remoteWorkflowRecord;
-(void)setRemoteWorkflowRecord:(WFWorkflowRecord *)arg1 ;
@end

