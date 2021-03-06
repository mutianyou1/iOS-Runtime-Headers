/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSDictionary, IKAppContext;

@interface VUIActionPromise : VUIAction {

	NSDictionary* _contextDataDictionary;
	IKAppContext* _appContext;

}

@property (nonatomic,readonly) NSDictionary * contextDataDictionary;              //@synthesize contextDataDictionary=_contextDataDictionary - In the implementation block
@property (assign,nonatomic,__weak) IKAppContext * appContext;                    //@synthesize appContext=_appContext - In the implementation block
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 appContext:(id)arg2 ;
-(NSDictionary *)contextDataDictionary;
@end

