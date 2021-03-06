/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSNumber, NSString, NSURL;

@interface VUIExtrasInfo : NSObject {

	NSDictionary* _extrasDict;

}

@property (nonatomic,readonly) NSNumber * contentRating; 
@property (nonatomic,readonly) NSString * adamID; 
@property (nonatomic,readonly) NSString * extrasURLString; 
@property (nonatomic,readonly) NSString * previewURLString; 
@property (nonatomic,retain) NSString * actionParams; 
@property (nonatomic,readonly) NSString * loadingImage; 
@property (nonatomic,readonly) BOOL isLightTheme; 
@property (nonatomic,readonly) NSURL * tvAppDeeplinkURL; 
@property (nonatomic,readonly) BOOL isEntitledToPlay; 
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
-(NSString *)adamID;
-(NSNumber *)contentRating;
-(NSString *)actionParams;
-(NSString *)previewURLString;
-(NSURL *)tvAppDeeplinkURL;
-(BOOL)isEntitledToPlay;
-(NSString *)extrasURLString;
-(void)setActionParams:(NSString *)arg1 ;
-(NSString *)loadingImage;
-(BOOL)isLightTheme;
@end

