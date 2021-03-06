/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/STSyncableSubObject.h>

@class NSString, STTestSyncableObject;

@interface STTestSyncableSubObject : NSManagedObject <STSyncableSubObject>

@property (assign,nonatomic) BOOL active; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) STTestSyncableObject * root; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<STSerializableManagedObject> syncableRootObject; 
-(id<STSerializableManagedObject>)syncableRootObject;
@end

