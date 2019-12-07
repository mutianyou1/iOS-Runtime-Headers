/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class BRContainer;

@interface BRUploadAllFilesOperation : BROperation {

	/*^block*/id _uploadAllFilesCompletion;
	BRContainer* _container;

}

@property (copy) id uploadAllFilesCompletion;              //@synthesize uploadAllFilesCompletion=_uploadAllFilesCompletion - In the implementation block
-(id)init;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithContainer:(id)arg1 ;
-(id)uploadAllFilesCompletion;
-(void)setUploadAllFilesCompletion:(id)arg1 ;
@end
