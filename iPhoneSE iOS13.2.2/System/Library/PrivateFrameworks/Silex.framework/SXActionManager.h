/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXActionManager.h>

@protocol SXActionManager <NSObject>
@required
-(void)commitPreviewViewController:(id)arg1;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 mode:(unsigned long long)arg5;
-(id)previewViewControllerForAction:(id)arg1;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2;
-(id)contextMenuConfigurationForAction:(id)arg1;

@end


@protocol SXActionActivityManager, SXActionViewManager;
@class SXActionManagerPreview, NSString;

@interface SXActionManager : NSObject <SXActionManager> {

	id<SXActionActivityManager> _activityManager;
	id<SXActionViewManager> _viewManager;
	SXActionManagerPreview* _currentPreview;

}

@property (nonatomic,readonly) id<SXActionActivityManager> activityManager;              //@synthesize activityManager=_activityManager - In the implementation block
@property (nonatomic,readonly) id<SXActionViewManager> viewManager;                      //@synthesize viewManager=_viewManager - In the implementation block
@property (nonatomic,retain) SXActionManagerPreview * currentPreview;                    //@synthesize currentPreview=_currentPreview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commitPreviewViewController:(id)arg1 ;
-(id<SXActionActivityManager>)activityManager;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 mode:(unsigned long long)arg5 ;
-(id)previewViewControllerForAction:(id)arg1 ;
-(void)performAction:(id)arg1 postActionHandlers:(id)arg2 ;
-(id)contextMenuConfigurationForAction:(id)arg1 ;
-(id<SXActionViewManager>)viewManager;
-(void)notifyPostActionHandlers:(id)arg1 action:(id)arg2 state:(unsigned long long)arg3 ;
-(void)setCurrentPreview:(SXActionManagerPreview *)arg1 ;
-(SXActionManagerPreview *)currentPreview;
-(id)initWithActionActivityManager:(id)arg1 viewManager:(id)arg2 ;
@end
