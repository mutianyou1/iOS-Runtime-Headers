/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, VSPersistentStorage, NSUndoManager;

@interface VSAccountSerializationCenter : NSObject {

	NSOperationQueue* _serializationQueue;
	VSPersistentStorage* _storage;

}

@property (nonatomic,retain) NSOperationQueue * serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
@property (nonatomic,retain) VSPersistentStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager; 
+(id)defaultSerializationCenter;
-(id)init;
-(VSPersistentStorage *)storage;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)undoManager;
-(NSOperationQueue *)serializationQueue;
-(id)exportDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setSerializationQueue:(NSOperationQueue *)arg1 ;
@end

