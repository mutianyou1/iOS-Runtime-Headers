/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKClassroomLockScreenMonitoring.h>

@class NSString;

@interface CRKClassroomLockScreenMonitor_iOS : NSObject <CRKClassroomLockScreenMonitoring> {

	int mDidAppearObserver;
	int mDidDismissObserver;
	BOOL _classroomLockScreenVisible;

}

@property (assign,getter=isClassroomLockScreenVisible,nonatomic) BOOL classroomLockScreenVisible;              //@synthesize classroomLockScreenVisible=_classroomLockScreenVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(void)startObserving;
-(void)endObserving;
-(void)setClassroomLockScreenVisible:(BOOL)arg1 ;
-(void)displayClassroomLockScreenWithLabel:(id)arg1 passcode:(id)arg2 ;
-(void)dismissClassroomLockScreen;
-(BOOL)isClassroomLockScreenVisible;
@end

