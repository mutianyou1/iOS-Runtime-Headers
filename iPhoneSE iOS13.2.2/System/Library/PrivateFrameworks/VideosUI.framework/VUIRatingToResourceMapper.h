/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VUIRatingToResourceMapper : NSObject {

	NSDictionary* _mappingDictionary;

}

@property (nonatomic,retain) NSDictionary * mappingDictionary;              //@synthesize mappingDictionary=_mappingDictionary - In the implementation block
-(id)init;
-(void)setMappingDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)mappingDictionary;
-(id)_cleanRatingName:(id)arg1 ;
-(id)resourceForRating:(id)arg1 ratingSystem:(id)arg2 ;
@end
