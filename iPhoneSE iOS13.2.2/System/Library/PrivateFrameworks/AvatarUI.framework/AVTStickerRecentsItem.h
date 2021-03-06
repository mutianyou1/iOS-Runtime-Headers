/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage, NSURL;


@protocol AVTStickerRecentsItem <AVTDiscardableContent>
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,copy,readonly) id provider; 
@required
-(NSString *)localizedDescription;
-(NSURL *)url;
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(void)setUrl:(id)arg1;
-(id)provider;
-(id)cellIdentifier;

@end

