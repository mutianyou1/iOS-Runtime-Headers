/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>

@class NSString, HFWallpaperEditCollectionBuilder;

@interface HFHomeBuilder : HFItemBuilder {

	NSString* _name;
	NSString* _userNotes;
	HFWallpaperEditCollectionBuilder* _wallpaperBuilder;

}

@property (nonatomic,retain) HFWallpaperEditCollectionBuilder * wallpaperBuilder;              //@synthesize wallpaperBuilder=_wallpaperBuilder - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * userNotes;                                               //@synthesize userNotes=_userNotes - In the implementation block
+(Class)homeKitRepresentationClass;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setHome:(id)arg1 ;
-(id)updateName;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(id)performValidation;
-(id)createHome;
-(HFWallpaperEditCollectionBuilder *)wallpaperBuilder;
-(id)updateUserNotes;
-(NSString *)userNotes;
-(void)setUserNotes:(NSString *)arg1 ;
-(void)setWallpaperBuilder:(HFWallpaperEditCollectionBuilder *)arg1 ;
@end

