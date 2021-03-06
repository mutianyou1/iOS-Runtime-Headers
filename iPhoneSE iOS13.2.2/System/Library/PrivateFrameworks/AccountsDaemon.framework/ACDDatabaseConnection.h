/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject, ACDDatabaseConnectionDelegate;
@class NSPersistentStoreCoordinator, NSManagedObjectContext, NSNumber;

@interface ACDDatabaseConnection : NSObject {

	id<NSObject> _managedObjectContextDidSaveObserver;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	id<ACDDatabaseConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (assign,nonatomic,__weak) id<ACDDatabaseConnectionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNumber * version; 
@property (nonatomic,retain) NSNumber * keychainVersion; 
+(id)new;
-(id)init;
-(void)dealloc;
-(id<ACDDatabaseConnectionDelegate>)delegate;
-(void)setDelegate:(id<ACDDatabaseConnectionDelegate>)arg1 ;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)_managedObjectModel;
-(NSManagedObjectContext *)managedObjectContext;
-(id)_persistentStore;
-(void)_managedObjectContextDidSave:(id)arg1 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(BOOL)saveWithError:(id*)arg1 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 ;
-(unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(id)existingObjectWithURI:(id)arg1 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 ;
-(void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2 ;
-(void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3 ;
-(BOOL)saveWithError:(id*)arg1 rollbackOnFailure:(BOOL)arg2 ;
-(id)managedObjectIDForURI:(id)arg1 ;
-(NSNumber *)keychainVersion;
-(void)setKeychainVersion:(NSNumber *)arg1 ;
-(id)objectForObjectURI:(id)arg1 ;
-(void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1 ;
-(void)_beginObservingManagedObjectContextDidSaveNotifications;
-(void)_endObservingManagedObjectContextDidSaveNotifications;
-(void)_handleManagedObjectContextError:(id)arg1 ;
-(id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2 ;
-(void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1 ;
@end

