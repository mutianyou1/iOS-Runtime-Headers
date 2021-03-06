/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSExternalEventHandling.h>

@class CSCoverSheetViewController, NSString;

@interface SBDashBoardAnalyticsEmitter : NSObject <CSExternalEventHandling> {

	CSCoverSheetViewController* _coverSheetViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)dealloc;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)participantState;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(id)initWithCoverSheetViewController:(id)arg1 ;
@end

