/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, EMMailDropMetadata;


@protocol EMContentItem <EFPubliclyDescribable>
@property (nonatomic,copy,readonly) NSArray * availableRepresentations; 
@property (nonatomic,readonly) BOOL isAvailableLocally; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * contentID; 
@property (nonatomic,copy,readonly) NSString * UTType; 
@property (nonatomic,readonly) long long dataTransferByteCount; 
@property (nonatomic,readonly) long long storageByteCount; 
@property (nonatomic,copy,readonly) EMMailDropMetadata * mailDropMetadata; 
@property (nonatomic,readonly) int exchangeEventUID; 
@required
-(NSString *)displayName;
-(NSString *)contentID;
-(EMMailDropMetadata *)mailDropMetadata;
-(NSString *)UTType;
-(int)exchangeEventUID;
-(id)requestRepresentationWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSArray *)availableRepresentations;
-(BOOL)isAvailableLocally;
-(long long)dataTransferByteCount;
-(long long)storageByteCount;
-(id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

