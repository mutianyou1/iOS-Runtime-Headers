/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <UIKitServices/UISApplicationInitializationContext.h>

@class UISDisplayContext, UISDeviceContext, NSSet, FBSSceneIdentityToken;

@interface UISMutableApplicationInitializationContext : UISApplicationInitializationContext

@property (nonatomic,retain) UISDisplayContext * displayContext; 
@property (nonatomic,retain) UISDeviceContext * deviceContext; 
@property (nonatomic,retain) NSSet * persistedSceneIdentifiers; 
@property (nonatomic,retain) FBSSceneIdentityToken * defaultSceneToken; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayContext:(UISDisplayContext *)arg1 ;
-(void)setDeviceContext:(UISDeviceContext *)arg1 ;
-(void)setPersistedSceneIdentifiers:(NSSet *)arg1 ;
-(void)setDefaultSceneToken:(FBSSceneIdentityToken *)arg1 ;
@end
