/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface WFImageCache : NSObject {

	NSMutableDictionary* _imageCache;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedImageCache;
-(id)init;
-(void)clearCache;
-(NSMutableDictionary *)imageCache;
-(id)imageNamed:(id)arg1 ;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(BOOL)_isUIKitImageName:(id)arg1 ;
@end
