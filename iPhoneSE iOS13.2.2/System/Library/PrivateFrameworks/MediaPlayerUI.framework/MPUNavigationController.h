/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@interface MPUNavigationController : UINavigationController {

	BOOL _supportsStandardInterfaceOrientations;
	/*^block*/id _overrideSupportedInterfaceOrientationsHandler;

}

@property (nonatomic,copy) id overrideSupportedInterfaceOrientationsHandler;              //@synthesize overrideSupportedInterfaceOrientationsHandler=_overrideSupportedInterfaceOrientationsHandler - In the implementation block
@property (assign,nonatomic) BOOL supportsStandardInterfaceOrientations;                  //@synthesize supportsStandardInterfaceOrientations=_supportsStandardInterfaceOrientations - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(id)overrideSupportedInterfaceOrientationsHandler;
-(void)setOverrideSupportedInterfaceOrientationsHandler:(id)arg1 ;
-(BOOL)supportsStandardInterfaceOrientations;
-(void)setSupportsStandardInterfaceOrientations:(BOOL)arg1 ;
@end

