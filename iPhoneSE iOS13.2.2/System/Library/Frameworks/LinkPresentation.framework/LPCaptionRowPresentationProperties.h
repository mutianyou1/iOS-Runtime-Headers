/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPCaptionPresentationProperties, LPCaptionButtonPresentationProperties;

@interface LPCaptionRowPresentationProperties : NSObject {

	LPCaptionPresentationProperties* _leading;
	LPCaptionPresentationProperties* _trailing;
	LPCaptionButtonPresentationProperties* _button;

}

@property (nonatomic,readonly) BOOL hasAnyContent; 
@property (nonatomic,retain,readonly) LPCaptionPresentationProperties * leading; 
@property (nonatomic,retain,readonly) LPCaptionPresentationProperties * trailing; 
@property (nonatomic,retain) LPCaptionButtonPresentationProperties * button;                   //@synthesize button=_button - In the implementation block
-(id)init;
-(id)left;
-(LPCaptionPresentationProperties *)leading;
-(LPCaptionButtonPresentationProperties *)button;
-(LPCaptionPresentationProperties *)trailing;
-(void)setButton:(LPCaptionButtonPresentationProperties *)arg1 ;
-(id)right;
-(BOOL)hasAnyContent;
-(void)applyToAllCaptions:(/*^block*/id)arg1 ;
@end

