/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSString;

@interface OBSetupAssistantAppsAndDataController : OBTableWelcomeController {

	NSString* _detailedLabelHeader;
	NSString* _detailedLabelBody;

}

@property (nonatomic,retain) NSString * detailedLabelHeader;              //@synthesize detailedLabelHeader=_detailedLabelHeader - In the implementation block
@property (nonatomic,retain) NSString * detailedLabelBody;                //@synthesize detailedLabelBody=_detailedLabelBody - In the implementation block
-(void)viewDidLoad;
-(void)setTableView:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(NSString *)detailedLabelHeader;
-(NSString *)detailedLabelBody;
-(void)setDetailedLabelHeader:(NSString *)arg1 ;
-(void)setDetailedLabelBody:(NSString *)arg1 ;
@end

