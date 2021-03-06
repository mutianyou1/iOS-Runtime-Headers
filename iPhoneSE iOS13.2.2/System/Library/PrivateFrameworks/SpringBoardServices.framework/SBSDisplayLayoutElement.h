/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSDisplayLayoutElement.h>
#import <libobjc.A.dylib/SBSDisplayLayoutElement.h>

@protocol SBSDisplayLayoutElement <NSObject>
@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
@property (nonatomic,readonly) long long layoutRole; 
@required
-(long long)layoutRole;
-(BOOL)isSpringBoardElement;

@end


@class NSString;

@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement <SBSDisplayLayoutElement>

@property (assign,nonatomic) long long layoutRole; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
-(long long)layoutRole;
-(id)succinctDescriptionBuilder;
-(BOOL)isSpringBoardElement;
-(void)setLayoutRole:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2 ;
@end

