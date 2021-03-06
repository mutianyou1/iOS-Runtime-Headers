/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSSiteMetadataProvider;
@class NSMutableSet, NSOperation;

@interface _WBSSiteMetadataRequestInfo : NSObject {

	id<WBSSiteMetadataProvider> _provider;
	NSMutableSet* _tokens;
	NSOperation* _operation;

}

@property (nonatomic,readonly) id<WBSSiteMetadataProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSMutableSet * tokens;                             //@synthesize tokens=_tokens - In the implementation block
@property (assign,nonatomic,__weak) NSOperation * operation;                      //@synthesize operation=_operation - In the implementation block
-(void)dealloc;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(id<WBSSiteMetadataProvider>)provider;
-(NSMutableSet *)tokens;
-(id)initWithProvider:(id)arg1 ;
@end

