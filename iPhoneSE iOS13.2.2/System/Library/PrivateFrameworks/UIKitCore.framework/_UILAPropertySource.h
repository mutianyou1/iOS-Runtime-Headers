/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol _UILAPropertySource <NSObject>
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints; 
@required
-(long long)axis;
-(void)setAxis:(long long)arg1;
-(void)_invalidateBaselineConstraint:(id)arg1;
-(BOOL)layoutFillsCanvas;
-(void)setLayoutFillsCanvas:(BOOL)arg1;
-(BOOL)layoutUsesCanvasMarginsWhenFilling;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1;
-(NSSet *)_newlyHiddenItems;
-(NSSet *)_newlyUnhiddenItems;
-(NSSet *)invalidBaselineConstraints;

@end

