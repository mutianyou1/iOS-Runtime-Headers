/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@class VMVoicemailManager;

@interface VMNavigationController : UINavigationController {

	VMVoicemailManager* _manager;

}

@property (nonatomic,readonly) VMVoicemailManager * manager;              //@synthesize manager=_manager - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(VMVoicemailManager *)manager;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
@end

