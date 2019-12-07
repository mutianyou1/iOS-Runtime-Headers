/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WGWidgetGroupViewController, SBHSidebarVisualConfiguration;


@protocol SBHSidebarProvider <SBHLegibility>
@property (nonatomic,retain) WGWidgetGroupViewController * widgetViewController; 
@property (nonatomic,retain) SBHSidebarVisualConfiguration * sidebarVisualConfiguration; 
@property (assign,nonatomic) unsigned long long layoutInsetsIgnoredEdges; 
@property (assign,nonatomic,__weak) id<SBHSidebarProviderDelegate> delegate; 
@required
-(id<SBHSidebarProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(SBHSidebarVisualConfiguration *)sidebarVisualConfiguration;
-(void)setSidebarVisualConfiguration:(id)arg1;
-(WGWidgetGroupViewController *)widgetViewController;
-(void)setEditingIcons:(BOOL)arg1;
-(unsigned long long)layoutInsetsIgnoredEdges;
-(void)setWidgetViewController:(id)arg1;
-(void)setLayoutInsetsIgnoredEdges:(unsigned long long)arg1;

@end
