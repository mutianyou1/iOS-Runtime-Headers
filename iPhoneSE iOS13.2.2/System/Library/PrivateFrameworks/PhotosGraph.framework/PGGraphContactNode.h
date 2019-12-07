/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSString, NSDate;

@interface PGGraphContactNode : PGGraphNode {

	NSString* _contactIdentifier;

}

@property (nonatomic,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (readonly) NSDate * birthdayDate; 
@property (readonly) NSDate * potentialBirthdayDate; 
-(NSString *)contactIdentifier;
-(NSDate *)birthdayDate;
-(NSDate *)potentialBirthdayDate;
-(unsigned long long)genderHintForGivenName;
@end
