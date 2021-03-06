/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngine/REElementAction.h>
#import <libobjc.A.dylib/REUISiriActionsPerformerDelegate.h>

@class REUISiriActionsPerformer, REUIDonatedElementProperties, NSString, UIImage;

@interface REUIElementDonatedActionAction : REElementAction <REUISiriActionsPerformerDelegate> {

	REUISiriActionsPerformer* _performer;
	REUIDonatedElementProperties* _properties;

}

@property (nonatomic,retain) REUISiriActionsPerformer * performer;                                    //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) REUIDonatedElementProperties * properties;                               //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * appName; 
@property (nonatomic,readonly) UIImage * appIcon; 
@property (assign,nonatomic,__weak) id<REUIElementDonatedActionActionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(REUIDonatedElementProperties *)properties;
-(void)setProperties:(REUIDonatedElementProperties *)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(NSString *)appName;
-(REUISiriActionsPerformer *)performer;
-(UIImage *)appIcon;
-(void)setPerformer:(REUISiriActionsPerformer *)arg1 ;
-(void)_performWithContext:(id)arg1 ;
-(id)fullsizeAppIcon;
-(id)siriActionsPerformerWantsAlertBackgroundImage:(id)arg1 ;
-(id)siriActionsPerformerWantsBackgroundViewToBlur:(id)arg1 ;
-(BOOL)siriActionsPerformer:(id)arg1 wantsToPresentViewController:(id)arg2 ;
-(void)siriActionsPerformerWantsToSuppressDismissal:(id)arg1 ;
-(BOOL)siriActionsPerformer:(id)arg1 wantsToDismissViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriActionsPerformerDidSucceed:(id)arg1 ;
-(void)siriActionsPerformer:(id)arg1 didFailWithError:(id)arg2 ;
-(id)_newPerformer;
@end

