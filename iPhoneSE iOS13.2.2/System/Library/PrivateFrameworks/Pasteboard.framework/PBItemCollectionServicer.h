/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBDataProviderProtocol.h>

@class NSMutableDictionary, PBItemCollection, NSString;

@interface PBItemCollectionServicer : NSObject <PBDataProviderProtocol> {

	NSMutableDictionary* _cleanupQueue_cleanupHandlerByUUID;
	PBItemCollection* _itemCollection;

}

@property (nonatomic,retain) PBItemCollection * itemCollection;              //@synthesize itemCollection=_itemCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newServicerForConnection:(id)arg1 itemCollection:(id)arg2 ;
-(void)setItemCollection:(PBItemCollection *)arg1 ;
-(PBItemCollection *)itemCollection;
-(void)waitForItemRequestsDeliveryCompletion:(/*^block*/id)arg1 ;
-(void)helloCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 itemCollection:(id)arg2 ;
-(void)loadRepresentationForItemAtIndex:(unsigned long long)arg1 type:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)callCleanupBlockWithUUID:(id)arg1 ;
@end

