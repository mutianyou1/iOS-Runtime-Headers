/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AKURLRequestApprover : NSObject {

	NSArray* _whiteListedPaths;

}
-(id)initWithWhitelistedPaths:(id)arg1 ;
-(BOOL)shouldAllowRequest:(id)arg1 ;
-(BOOL)_matchInputAgainstPaths:(id)arg1 ;
@end
