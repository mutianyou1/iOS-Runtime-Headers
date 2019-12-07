/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, NSMutableArray;

@interface CKComponentViewReuseInfo : NSObject {

	UIView* _view;
	/*^block*/id _didEnterReusePoolBlock;
	/*^block*/id _willLeaveReusePoolBlock;
	NSMutableArray* _childViewInfos;
	BOOL _hidden;
	BOOL _ancestorHidden;

}
-(void)didHide;
-(id)initWithView:(id)arg1 didEnterReusePoolBlock:(/*^block*/id)arg2 willLeaveReusePoolBlock:(/*^block*/id)arg3 ;
-(void)registerChildViewInfo:(id)arg1 ;
-(void)willUnhide;
-(void)ancestorDidHide;
-(void)ancestorWillUnhide;
@end
