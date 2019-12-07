/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol CNMeCardSharingAvatarImageDataProvider <NSObject>
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) CGRect cropRect; 
@property (nonatomic,readonly) NSData * thumbnailImageData; 
@required
-(NSData *)imageData;
-(CGRect)cropRect;
-(NSData *)thumbnailImageData;

@end
