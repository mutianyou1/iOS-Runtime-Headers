/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@class RUIPage, NSString;

@interface RUIPageElement : RUIElement {

	RUIPage* _page;

}

@property (assign,nonatomic,__weak) RUIPage * page;                      //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(RUIPage *)page;
-(void)setPage:(RUIPage *)arg1 ;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
-(id)staticValues;
@end

