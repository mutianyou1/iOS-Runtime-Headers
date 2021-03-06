/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface BMItemMO : NSManagedObject

@property (nonatomic,copy) NSString * normalizedValue; 
@property (nonatomic,copy) NSString * typeIdentifier; 
@property (nonatomic,copy) NSString * uniformIdentifier; 
@property (nonatomic,retain) NSSet * antecedentOfRules; 
@property (nonatomic,retain) NSSet * consequentOfRules; 
+(id)fetchRequest;
@end

