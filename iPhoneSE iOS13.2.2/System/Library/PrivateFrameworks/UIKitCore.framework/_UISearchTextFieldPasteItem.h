/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextPasteItem.h>
#import <UIKit/UISearchTextFieldPasteItem.h>

@class UISearchToken, NSString, NSItemProvider, NSDictionary;

@interface _UISearchTextFieldPasteItem : UITextPasteItem <UISearchTextFieldPasteItem> {

	UISearchToken* _searchTokenResult;

}

@property (setter=setSearchTokenResult:,nonatomic,retain) UISearchToken * _searchTokenResult;              //@synthesize searchTokenResult=_searchTokenResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (nonatomic,readonly) id localObject; 
@property (nonatomic,readonly) NSDictionary * defaultAttributes; 
-(UISearchToken *)_searchTokenResult;
-(void)setSearchTokenResult:(id)arg1 ;
@end

