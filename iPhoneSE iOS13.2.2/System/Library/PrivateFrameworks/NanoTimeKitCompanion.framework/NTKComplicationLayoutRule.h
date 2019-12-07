/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKLayoutRule.h>

@interface NTKComplicationLayoutRule : NTKLayoutRule {

	UIEdgeInsets _keylinePadding;

}

@property (nonatomic,readonly) UIEdgeInsets keylinePadding;              //@synthesize keylinePadding=_keylinePadding - In the implementation block
+(id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(UIEdgeInsets)arg5 ;
+(id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(UIEdgeInsets)arg5 clip:(BOOL)arg6 transform:(CGAffineTransform)arg7 ;
+(id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 keylinePadding:(UIEdgeInsets)arg5 clip:(BOOL)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)keylinePadding;
@end
