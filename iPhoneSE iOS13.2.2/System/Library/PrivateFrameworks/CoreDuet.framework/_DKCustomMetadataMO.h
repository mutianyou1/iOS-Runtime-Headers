/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, NSNumber, NSDate, NSData;

@interface _DKCustomMetadataMO : NSManagedObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSSet * event; 
@property (nonatomic,copy) NSNumber * doubleValue; 
@property (nonatomic,copy) NSNumber * integerValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSDate * dateValue; 
@property (nonatomic,copy) NSData * binaryValue; 
@property (nonatomic,copy) NSString * valueHash; 
+(id)fetchRequest;
@end

