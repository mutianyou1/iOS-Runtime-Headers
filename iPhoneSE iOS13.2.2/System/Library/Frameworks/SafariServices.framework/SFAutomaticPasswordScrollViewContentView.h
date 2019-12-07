/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol SFAutomaticPasswordScrollViewContentViewLayoutObserver;
@interface SFAutomaticPasswordScrollViewContentView : UIView {

	id<SFAutomaticPasswordScrollViewContentViewLayoutObserver> _layoutObserver;

}

@property (assign,nonatomic,__weak) id<SFAutomaticPasswordScrollViewContentViewLayoutObserver> layoutObserver;              //@synthesize layoutObserver=_layoutObserver - In the implementation block
-(void)layoutSubviews;
-(id<SFAutomaticPasswordScrollViewContentViewLayoutObserver>)layoutObserver;
-(void)setLayoutObserver:(id<SFAutomaticPasswordScrollViewContentViewLayoutObserver>)arg1 ;
@end
