/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKBKeyView.h>
#import <UIKit/UIKeyboardEmojiCategoryUpdate.h>

@protocol UIKeyboardEmojiCategoryUpdateDelegate;
@class UIKeyboardEmojiKeyDisplayController, NSString;

@interface UIKeyboardEmojiKeyView : UIKBKeyView <UIKeyboardEmojiCategoryUpdate> {

	UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate> emojiKeyManager;

}

@property (assign,nonatomic) UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate> emojiKeyManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate>)emojiKeyManager;
-(void)setEmojiKeyManager:(UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate>)arg1 ;
-(void)updateToCategory:(long long)arg1 ;
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1 ;
@end

