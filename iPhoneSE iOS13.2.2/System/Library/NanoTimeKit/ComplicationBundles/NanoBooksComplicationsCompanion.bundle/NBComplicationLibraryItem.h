/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoBooksComplicationsCompanion.bundle/NanoBooksComplicationsCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, UIImage;

@interface NBComplicationLibraryItem : NSObject {

	NSString* _title;
	NSString* _author;
	NSNumber* _persistentID;
	UIImage* _artwork;
	NSNumber* _duration;
	NSNumber* _bookmarkTime;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * author;               //@synthesize author=_author - In the implementation block
@property (nonatomic,readonly) NSNumber * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) UIImage * artwork;                    //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSNumber * bookmarkTime;              //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
+(id)libraryItemWithMediaItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(NSNumber *)duration;
-(NSString *)author;
-(NSNumber *)persistentID;
-(UIImage *)artwork;
-(NSNumber *)bookmarkTime;
@end

