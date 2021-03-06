/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKMessageEntryViewInputDelegate <NSObject>
@optional
-(void)messageEntryView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
-(void)messageEntryViewDidExpand:(id)arg1;
-(void)messageEntryViewDidCollapse:(id)arg1;
-(void)messageEntryViewPhotoButtonTouchDown:(id)arg1;

@required
-(BOOL)messageEntryShouldHideCaret:(id)arg1;
-(long long)messageEntryViewHighLightInputButton:(id)arg1;
-(void)messageEntryViewDidTakeFocus:(id)arg1;
-(void)messageEntryViewHandwritingButtonHit:(id)arg1;
-(void)messageEntryViewPhotoButtonHit:(id)arg1;
-(void)messageEntryViewBrowserButtonHit:(id)arg1;

@end

