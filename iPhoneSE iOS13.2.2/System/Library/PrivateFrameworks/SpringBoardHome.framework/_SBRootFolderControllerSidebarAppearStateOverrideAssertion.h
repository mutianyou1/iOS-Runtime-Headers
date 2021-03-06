/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBRootFolderController;

@interface _SBRootFolderControllerSidebarAppearStateOverrideAssertion : NSObject <BSInvalidatable, BSDescriptionProviding> {

	BOOL _invalidated;
	NSString* _reason;
	SBRootFolderController* _rootFolderController;

}

@property (nonatomic,__weak,readonly) SBRootFolderController * rootFolderController;              //@synthesize rootFolderController=_rootFolderController - In the implementation block
@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                               //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                            //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(NSString *)reason;
-(BOOL)isInvalidated;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(id)initWithRootFolderController:(id)arg1 reason:(id)arg2 ;
-(SBRootFolderController *)rootFolderController;
@end

