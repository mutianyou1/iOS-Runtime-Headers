/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface HMHAPMetadataCategory : NSObject {

	NSNumber* _categoryNumber;
	NSString* _categoryType;
	NSString* _categoryDescription;

}

@property (nonatomic,retain) NSNumber * categoryNumber;                   //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (nonatomic,retain) NSString * categoryType;                     //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,retain) NSString * categoryDescription;              //@synthesize categoryDescription=_categoryDescription - In the implementation block
-(NSString *)categoryType;
-(void)setCategoryType:(NSString *)arg1 ;
-(NSString *)categoryDescription;
-(NSNumber *)categoryNumber;
-(void)setCategoryNumber:(NSNumber *)arg1 ;
-(void)setCategoryDescription:(NSString *)arg1 ;
@end

