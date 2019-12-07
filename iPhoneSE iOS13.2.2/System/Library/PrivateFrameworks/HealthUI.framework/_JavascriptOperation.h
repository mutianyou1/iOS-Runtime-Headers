/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _JavascriptOperation : NSObject {

	NSString* _javascript;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSString * javascript;              //@synthesize javascript=_javascript - In the implementation block
@property (nonatomic,copy) id completion;                        //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)initWithJavascript:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitJavascript:(id)arg1 finishBlock:(/*^block*/id)arg2 ;
-(NSString *)javascript;
-(void)setJavascript:(NSString *)arg1 ;
@end
