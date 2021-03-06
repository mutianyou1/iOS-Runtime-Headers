/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, CPBarButton;


@protocol CPBarButtonProviding <NSObject>
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
@property (nonatomic,retain) CPBarButton * backButton; 
@required
-(CPBarButton *)backButton;
-(void)setBackButton:(id)arg1;
-(NSArray *)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1;
-(NSArray *)trailingNavigationBarButtons;
-(void)setTrailingNavigationBarButtons:(id)arg1;

@end

