/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableSet;

@interface MTLibraryEntityChanges : NSObject <NSCopying> {

	NSString* _entityName;
	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSMutableSet* _updatedObjectIDs;

}

@property (nonatomic,retain) NSMutableSet * insertedObjectIDs;              //@synthesize insertedObjectIDs=_insertedObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedObjectIDs;               //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedObjectIDs;               //@synthesize updatedObjectIDs=_updatedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                       //@synthesize entityName=_entityName - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasChanges;
-(id)initWithEntityName:(id)arg1 ;
-(NSString *)entityName;
-(BOOL)hasInserts;
-(NSMutableSet *)deletedObjectIDs;
-(BOOL)hasDeletes;
-(NSMutableSet *)insertedObjectIDs;
-(NSMutableSet *)updatedObjectIDs;
-(BOOL)hasUpdates;
-(void)setInsertedObjectIDs:(NSMutableSet *)arg1 ;
-(void)setDeletedObjectIDs:(NSMutableSet *)arg1 ;
-(void)setUpdatedObjectIDs:(NSMutableSet *)arg1 ;
-(id)insertedAndUpdatedObjectIDs;
-(void)combineChanges:(id)arg1 ;
-(void)add:(id)arg1 changeType:(int)arg2 ;
@end

