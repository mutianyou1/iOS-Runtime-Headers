/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXRootOfAppData.h>

@class NSMutableDictionary;

@interface ATXRootOfAppDataWithHashes : ATXRootOfAppData {

	NSMutableDictionary* _dataForBundleId;

}
-(id)init;
-(id)description;
-(id)serialize;
-(id)initWithSerialized:(id)arg1 ;
-(unsigned long long)sessionCountForBundleId:(id)arg1 ;
-(unsigned long long)sessionCountForBundleId:(id)arg1 firstAction:(id)arg2 ;
-(void)recordSessionWithBundleId:(id)arg1 firstAction:(id)arg2 ;
@end
