/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface BLHLSGroup : NSObject {

	NSString* _groupID;
	NSArray* _media;

}

@property (nonatomic,readonly) NSString * groupID;              //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) NSArray * media;                 //@synthesize media=_media - In the implementation block
-(id)description;
-(NSString *)groupID;
-(NSArray *)media;
-(id)initWithGroupID:(id)arg1 media:(id)arg2 ;
@end

