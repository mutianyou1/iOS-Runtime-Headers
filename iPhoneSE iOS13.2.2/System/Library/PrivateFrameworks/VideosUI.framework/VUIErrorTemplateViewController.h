/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class IKViewElement, VUIErrorView;

@interface VUIErrorTemplateViewController : UIViewController {

	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) VUIErrorView * errorView; 
-(void)loadView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIErrorView *)errorView;
-(void)updateWithViewElement:(id)arg1 ;
-(void)updateWithTemplateElement:(id)arg1 ;
@end
