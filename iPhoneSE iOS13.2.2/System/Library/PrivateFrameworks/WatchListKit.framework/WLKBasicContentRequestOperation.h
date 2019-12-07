/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray, WLKBasicContentRequestResponse, WLKBasicContentMetadata;

@interface WLKBasicContentRequestOperation : WLKUTSNetworkRequestOperation {

	NSArray* _contentIDs;
	WLKBasicContentRequestResponse* _response;

}

@property (nonatomic,copy,readonly) NSArray * contentIDs;                                   //@synthesize contentIDs=_contentIDs - In the implementation block
@property (nonatomic,readonly) WLKBasicContentRequestResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * basicContentMetadata; 
-(WLKBasicContentRequestResponse *)response;
-(void)processResponse;
-(id)initWithContentIDs:(id)arg1 caller:(id)arg2 ;
-(id)initWithContentID:(id)arg1 caller:(id)arg2 ;
-(WLKBasicContentMetadata *)basicContentMetadata;
-(NSArray *)contentIDs;
@end
