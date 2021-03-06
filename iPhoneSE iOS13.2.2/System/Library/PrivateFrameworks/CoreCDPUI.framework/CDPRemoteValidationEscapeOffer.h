/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIViewController, NSString;

@interface CDPRemoteValidationEscapeOffer : NSObject {

	NSMutableArray* _escapeOptions;
	UIViewController* _presentingViewController;
	NSString* _escapeOfferName;
	NSString* _title;
	NSString* _message;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) NSString * escapeOfferName;                                      //@synthesize escapeOfferName=_escapeOfferName - In the implementation block
@property (nonatomic,retain) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                                              //@synthesize message=_message - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)handleEscapeAction:(id)arg1 ;
-(void)setEscapeOfferName:(NSString *)arg1 ;
-(void)addEscapeOptionsObject:(id)arg1 ;
-(id)escapeOptions;
-(NSString *)escapeOfferName;
-(id)_actionFromEscapeOption:(id)arg1 ;
-(long long)_styleForEscapeOption:(id)arg1 ;
-(void)dismissOfferAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

