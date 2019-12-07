/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition, NSArray;

@interface RTTDictionaryManager : NSObject {

	NSCondition* _condition;
	NSArray* _availableDictionaries;

}

@property (nonatomic,retain) NSArray * availableDictionaries;              //@synthesize availableDictionaries=_availableDictionaries - In the implementation block
+(id)availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)downloadIfNeeded;
-(void)deleteIfNeeded;
-(void)setAvailableDictionaries:(NSArray *)arg1 ;
-(id)_ttyDictionaryAsset;
-(BOOL)downloadAsset:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_isStalledAutoDownloadAsset:(id)arg1 ;
-(NSArray *)availableDictionaries;
@end
