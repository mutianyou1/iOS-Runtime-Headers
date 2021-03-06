/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSSnapshotBag.h>

@class NSDate, NSString;

@interface JetEngine.OverriddenAMSBag : AMSSnapshotBag {

	 backing;
	 overrides;

}

@property (readonly,nonatomic) BOOL expired; 
@property (readonly,nonatomic) NSDate * expirationDate; 
@property (readonly,nonatomic) NSString * profile; 
@property (readonly,nonatomic) NSString * profileVersion; 
-(id)init;
-(void)dealloc;
-(id)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)profileVersion;
-(void)forwardSnapshotBagExpiredValueAccessed:(id)arg1 ;
@end

