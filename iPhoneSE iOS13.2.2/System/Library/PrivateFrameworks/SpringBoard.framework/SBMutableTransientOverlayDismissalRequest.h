/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayDismissalRequest.h>

@interface SBMutableTransientOverlayDismissalRequest : SBTransientOverlayDismissalRequest

@property (assign,getter=isAnimated,nonatomic) BOOL animated; 
@property (nonatomic,copy) id completionHandler; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
@end

