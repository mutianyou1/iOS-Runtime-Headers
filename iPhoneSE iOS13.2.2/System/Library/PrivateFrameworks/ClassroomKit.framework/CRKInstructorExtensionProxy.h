/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class LSApplicationWorkspace, NSExtension, NSUUID, NSString;

@interface CRKInstructorExtensionProxy : NSObject <LSApplicationWorkspaceObserverProtocol> {

	LSApplicationWorkspace* mWorkspace;
	NSExtension* mInstructorExtension;
	NSUUID* mContextIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedExtensionProxy;
-(id)init;
-(void)dealloc;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)fetchListenerEndpointFromClassroomBundleWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)beginExtensionRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)configureInstructorExtensionAfterFetchError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resetExtension;
-(void)establishEndpointWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)proxiesContainClassroomApp:(id)arg1 ;
-(void)fetchListenerEndpointWithCompletionBlock:(/*^block*/id)arg1 ;
@end

