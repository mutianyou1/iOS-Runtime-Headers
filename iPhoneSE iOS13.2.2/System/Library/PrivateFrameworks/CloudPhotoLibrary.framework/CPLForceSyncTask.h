/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface CPLForceSyncTask : NSObject {

	BOOL _cancelled;
	NSArray* _scopeIdentifiers;
	NSString* _taskIdentifier;

}

@property (nonatomic,copy) NSString * taskIdentifier;                          //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scopeIdentifiers;                //@synthesize scopeIdentifiers=_scopeIdentifiers - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(id)description;
-(BOOL)isCancelled;
-(void)launch;
-(NSString *)taskIdentifier;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)cancelTask;
-(NSArray *)scopeIdentifiers;
-(id)initWithScopeIdentifiers:(id)arg1 ;
@end

