/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSOperationQueue;

@interface ICRemoteFileAttachmentDownloader : NSObject {

	NSMutableDictionary* _operationsByAttachmentIdentifier;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * operationsByAttachmentIdentifier;              //@synthesize operationsByAttachmentIdentifier=_operationsByAttachmentIdentifier - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                   //@synthesize operationQueue=_operationQueue - In the implementation block
+(BOOL)needsToDownloadRemoteFileAttachments;
+(id)sharedDownloader;
+(id)allUndownloadedLegacyAttachmentsInContext:(id)arg1 ;
+(void)releaseSharedDownloaderIfPossible;
+(void)initializeDownloaderAfterDelayIfNecessary;
-(id)init;
-(void)dealloc;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)reachabilityChanged:(id)arg1 ;
-(void)setOperationsByAttachmentIdentifier:(NSMutableDictionary *)arg1 ;
-(void)resumeDownloadsAfterDelay;
-(void)downloadUndownloadedLegacyAttachments;
-(void)downloadRemoteFileForAttachment:(id)arg1 ;
-(void)downloadRemoteFileForAttachmentObjectID:(id)arg1 ;
-(NSMutableDictionary *)operationsByAttachmentIdentifier;
@end

