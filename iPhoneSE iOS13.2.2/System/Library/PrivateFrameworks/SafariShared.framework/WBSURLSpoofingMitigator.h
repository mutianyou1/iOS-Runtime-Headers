/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, _WKUserInitiatedAction, NSTimer;

@interface WBSURLSpoofingMitigator : NSObject {

	NSDate* _dateOfStartOfLastProvisionalNavigation;
	unsigned long long _recentlyInterruptedNavigationCount;
	_WKUserInitiatedAction* _userInitiatedAction;
	NSTimer* _timerForRevertingToCommittedURL;
	BOOL _UIShouldReflectCommittedURLInsteadOfCurrentURL;
	long long _navigationSource;

}

@property (nonatomic,readonly) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL;              //@synthesize UIShouldReflectCommittedURLInsteadOfCurrentURL=_UIShouldReflectCommittedURLInsteadOfCurrentURL - In the implementation block
@property (assign,nonatomic) long long navigationSource;                                         //@synthesize navigationSource=_navigationSource - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
-(BOOL)UIShouldReflectCommittedURLInsteadOfCurrentURL;
-(void)didStartProvisionalNavigationWithUserInitiatedAction:(id)arg1 ;
-(void)didCommitNavigation;
-(void)setNavigationSource:(long long)arg1 ;
-(void)didFailProvisionalNavigationWithError:(id)arg1 ;
-(void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)arg1 ;
-(void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
-(void)_stopTrackingInterruptedProvisionalNavigations;
-(long long)navigationSource;
@end

