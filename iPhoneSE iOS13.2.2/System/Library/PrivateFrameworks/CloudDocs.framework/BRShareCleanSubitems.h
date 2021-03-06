/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCleanSubitems : BROperation {

	NSURL* _url;
	/*^block*/id _cleanSubitemsCompletionBlock;

}

@property (copy) id cleanSubitemsCompletionBlock;              //@synthesize cleanSubitemsCompletionBlock=_cleanSubitemsCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)cleanSubitemsCompletionBlock;
-(void)setCleanSubitemsCompletionBlock:(id)arg1 ;
@end

