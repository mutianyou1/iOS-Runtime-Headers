/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, NSString;


@protocol CKMessageAcknowledgment <NSObject>
@property (nonatomic,readonly) long long messageAcknowledgmentType; 
@property (nonatomic,readonly) UIColor * acknowledgmentImageColor; 
@property (nonatomic,readonly) NSString * acknowledgmentImageName; 
@property (nonatomic,readonly) UIColor * selectedAcknowledgmentImageColor; 
@property (nonatomic,readonly) UIColor * selectedBalloonColor; 
@required
-(UIColor *)selectedAcknowledgmentImageColor;
-(UIColor *)acknowledgmentImageColor;
-(long long)messageAcknowledgmentType;
-(NSString *)acknowledgmentImageName;
-(UIColor *)selectedBalloonColor;

@end

