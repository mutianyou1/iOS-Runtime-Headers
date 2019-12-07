/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKDismissViewDelegate;
@class NSArray;

@interface CKDismissView : UIView {

	id<CKDismissViewDelegate> _delegate;
	NSArray* _passthroughViews;

}

@property (assign,nonatomic,__weak) id<CKDismissViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                               //@synthesize passthroughViews=_passthroughViews - In the implementation block
-(id<CKDismissViewDelegate>)delegate;
-(void)setDelegate:(id<CKDismissViewDelegate>)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
@end
