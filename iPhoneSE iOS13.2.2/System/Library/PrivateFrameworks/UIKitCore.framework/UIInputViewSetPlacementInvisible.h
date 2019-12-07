/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacement.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIInputViewSetPlacement;

@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacement <NSSecureCoding> {

	UIInputViewSetPlacement* _actualPlacement;

}
+(BOOL)supportsSecureCoding;
+(id)placementWithPlacement:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGAffineTransform)transform;
-(double)alpha;
-(BOOL)isInteractive;
-(BOOL)showsInputViews;
-(BOOL)isUndocked;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(BOOL)inputViewWillAppear;
-(BOOL)showsKeyboard;
-(void)setDirty;
-(BOOL)isInvisible;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(BOOL)accessoryViewWillAppear;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(id)applicatorInfoForOwner:(id)arg1 ;
@end
