/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBIconAccessoryInfoProvider.h>

@class NSString;

@interface SBForceTouchAppIconInfoProvider : NSObject <SBIconAccessoryInfoProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * location; 
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted; 
@property (nonatomic,readonly) long long continuityBadgeType; 
-(NSString *)location;
-(BOOL)isHighlighted;
-(long long)continuityBadgeType;
@end

