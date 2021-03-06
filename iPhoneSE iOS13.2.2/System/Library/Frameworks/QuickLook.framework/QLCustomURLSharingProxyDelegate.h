/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@protocol UIDocumentInteractionControllerDelegate;
@class NSString;

@interface QLCustomURLSharingProxyDelegate : NSObject <UIDocumentInteractionControllerDelegate> {

	id<UIDocumentInteractionControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIDocumentInteractionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIDocumentInteractionControllerDelegate>)delegate;
-(void)setDelegate:(id<UIDocumentInteractionControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
@end

