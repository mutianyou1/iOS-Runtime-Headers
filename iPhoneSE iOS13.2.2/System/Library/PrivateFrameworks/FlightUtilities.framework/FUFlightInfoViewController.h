/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class FUFlightInfoView;

@interface FUFlightInfoViewController : UIViewController {

	FUFlightInfoView* _flight;
	unsigned long long _style;

}
-(void)setStyle:(unsigned long long)arg1 ;
-(void)loadView;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)flightInfoView;
@end
