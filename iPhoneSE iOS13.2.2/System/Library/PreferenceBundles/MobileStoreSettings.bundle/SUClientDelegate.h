/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUClientDelegate <NSObject>
@optional
-(BOOL)client:(id)arg1 presentComposeReviewViewController:(id)arg2 animated:(BOOL)arg3;
-(id)topViewControllerForClient:(id)arg1;
-(BOOL)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(BOOL)arg3;
-(BOOL)client:(id)arg1 openInternalURL:(id)arg2;
-(id)downloadManagerForClient:(id)arg1 downloadKinds:(id)arg2;
-(id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2;

@required
-(BOOL)client:(id)arg1 presentModalViewController:(id)arg2 animated:(BOOL)arg3;

@end

