/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol __NSURLSessionTaskGroupForConfiguration;
@class NSURLRequest, NSUUID, NSURL, NSData, NSString;

@interface __NSCFTaskForClass : NSObject {

	Class cl;
	NSURLRequest* request;
	NSUUID* uniqueIdentifier;
	NSURL* uploadFile;
	NSData* bodyData;
	/*^block*/id completion;
	NSString* downloadFilePath;
	NSData* resumeData;
	/*^block*/id downloadCompletion;
	id<__NSURLSessionTaskGroupForConfiguration> _group;

}

@property (retain,readonly) id<__NSURLSessionTaskGroupForConfiguration> group;              //@synthesize group=_group - In the implementation block
@property (retain) Class cl; 
@property (retain) NSURLRequest * request; 
@property (retain) NSUUID * uniqueIdentifier; 
@property (retain) NSURL * uploadFile; 
@property (retain) NSData * bodyData; 
@property (copy) id completion; 
@property (retain) NSString * downloadFilePath; 
@property (retain) NSData * resumeData; 
@property (copy) id downloadCompletion; 
-(void)dealloc;
-(NSUUID *)uniqueIdentifier;
-(id<__NSURLSessionTaskGroupForConfiguration>)group;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)request;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(Class)cl;
-(NSURL *)uploadFile;
-(NSData *)bodyData;
-(NSString *)downloadFilePath;
-(NSData *)resumeData;
-(id)downloadCompletion;
-(id)initWithGroup:(id)arg1 ;
-(void)setCl:(Class)arg1 ;
-(void)setUploadFile:(NSURL *)arg1 ;
-(void)setBodyData:(NSData *)arg1 ;
-(void)setDownloadFilePath:(NSString *)arg1 ;
-(void)setResumeData:(NSData *)arg1 ;
-(void)setDownloadCompletion:(id)arg1 ;
@end
