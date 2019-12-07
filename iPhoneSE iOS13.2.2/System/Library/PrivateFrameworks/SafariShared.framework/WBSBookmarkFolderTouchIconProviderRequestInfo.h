/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSSet, NSArray;

@interface WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject {

	NSMutableArray* _thumbnailImages;
	NSMutableArray* _backgroundColors;
	BOOL _hasScheduledCoalescedUpdate;
	NSSet* _subrequestTokens;

}

@property (nonatomic,copy) NSSet * subrequestTokens;                         //@synthesize subrequestTokens=_subrequestTokens - In the implementation block
@property (nonatomic,copy,readonly) NSArray * thumbnailImages; 
@property (nonatomic,copy,readonly) NSArray * backgroundColors; 
@property (assign,nonatomic) BOOL hasScheduledCoalescedUpdate;               //@synthesize hasScheduledCoalescedUpdate=_hasScheduledCoalescedUpdate - In the implementation block
-(id)init;
-(NSArray *)thumbnailImages;
-(NSArray *)backgroundColors;
-(NSSet *)subrequestTokens;
-(void)setSubrequestTokens:(NSSet *)arg1 ;
-(void)setThumbnailImage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)hasScheduledCoalescedUpdate;
-(void)setHasScheduledCoalescedUpdate:(BOOL)arg1 ;
@end
