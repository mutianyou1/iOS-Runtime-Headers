/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface AXSSDatabaseManager : NSObject {

	int _lockNotificationToken;
	BOOL _isScreenedLocked;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,readonly) BOOL canSave; 
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
+(id)sharedDatabase;
-(id)init;
-(void)dealloc;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(BOOL)canSave;
-(id)cloudObjectFromLocalObjects:(id)arg1 withTable:(id)arg2 andObjectID:(id)arg3 ;
-(void)userAuthChanged;
@end

