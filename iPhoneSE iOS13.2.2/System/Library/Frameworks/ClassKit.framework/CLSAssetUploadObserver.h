/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSAsset, NSError, NSMetadataQuery, NSOperationQueue;

@interface CLSAssetUploadObserver : NSObject {

	CLSAsset* _asset;
	double _uploadProgress;
	NSError* _uploadError;
	/*^block*/id _onUploadProgress;
	/*^block*/id _onUploadComplete;
	NSMetadataQuery* _query;
	NSOperationQueue* _uploadObserverQueue;
	/*^block*/id _preCompleteHook;

}

@property (nonatomic,retain) CLSAsset * asset;                                    //@synthesize asset=_asset - In the implementation block
@property (assign,getter=isUploaded,nonatomic) BOOL uploaded; 
@property (assign) double uploadProgress;                                         //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (retain) NSError * uploadError;                                         //@synthesize uploadError=_uploadError - In the implementation block
@property (nonatomic,retain) NSMetadataQuery * query;                             //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSOperationQueue * uploadObserverQueue;              //@synthesize uploadObserverQueue=_uploadObserverQueue - In the implementation block
@property (nonatomic,copy) id preCompleteHook;                                    //@synthesize preCompleteHook=_preCompleteHook - In the implementation block
@property (nonatomic,copy) id onUploadProgress;                                   //@synthesize onUploadProgress=_onUploadProgress - In the implementation block
@property (nonatomic,copy) id onUploadComplete;                                   //@synthesize onUploadComplete=_onUploadComplete - In the implementation block
-(id)init;
-(NSMetadataQuery *)query;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(CLSAsset *)asset;
-(void)setAsset:(CLSAsset *)arg1 ;
-(void)startObserving;
-(void)stopObserving;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)isUploaded;
-(void)setUploaded:(BOOL)arg1 ;
-(void)setUploadError:(NSError *)arg1 ;
-(NSError *)uploadError;
-(double)uploadProgress;
-(void)setPreCompleteHook:(id)arg1 ;
-(void)queryGatheredData:(id)arg1 ;
-(void)queryUpdated:(id)arg1 ;
-(void)setUploadProgress:(double)arg1 ;
-(void)_notifyOfCompletion;
-(void)_processItems:(id)arg1 ;
-(void)_notifyOfChange;
-(id)preCompleteHook;
-(id)onUploadProgress;
-(void)setOnUploadProgress:(id)arg1 ;
-(id)onUploadComplete;
-(void)setOnUploadComplete:(id)arg1 ;
-(NSOperationQueue *)uploadObserverQueue;
-(void)setUploadObserverQueue:(NSOperationQueue *)arg1 ;
@end
