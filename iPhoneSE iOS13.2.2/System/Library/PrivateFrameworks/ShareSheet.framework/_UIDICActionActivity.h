/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class NSString;

@interface _UIDICActionActivity : UIActivity {

	NSString* _actionActivityType;
	NSString* _activityImageName;
	NSString* _localizedTitle;
	/*^block*/id _activityPerformingHandler;
	/*^block*/id _activityFinishedPerformingHandler;

}

@property (nonatomic,copy) id activityPerformingHandler;                      //@synthesize activityPerformingHandler=_activityPerformingHandler - In the implementation block
@property (nonatomic,copy) id activityFinishedPerformingHandler;              //@synthesize activityFinishedPerformingHandler=_activityFinishedPerformingHandler - In the implementation block
+(long long)activityCategory;
+(id)newPreviewActionActivity;
+(id)newLegacyDelegationActionActivityForPrint;
+(id)newLegacyDelegationActionActivityForCopy;
+(id)newLegacyDelegationActionActivityForSaveToCameraRoll;
-(id)description;
-(id)activityType;
-(void)_cleanup;
-(id)_systemImageName;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)initWithActivityType:(id)arg1 activityImageName:(id)arg2 localizedTitle:(id)arg3 ;
-(id)activityPerformingHandler;
-(void)setActivityPerformingHandler:(id)arg1 ;
-(id)activityFinishedPerformingHandler;
-(void)setActivityFinishedPerformingHandler:(id)arg1 ;
@end

