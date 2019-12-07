/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCClientZone.h>

@class NSMutableDictionary, NSString, BRCSharedServerZone;

@interface BRCSharedClientZone : BRCClientZone {

	NSMutableDictionary* _shareAcceptationByItemID;

}

@property (nonatomic,readonly) NSString * ownerName; 
@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCSharedServerZone * sharedZone; 
-(NSString *)ownerName;
-(BRCSharedServerZone *)sharedZone;
-(BOOL)isSharedZone;
-(id)asSharedClientZone;
-(id)rootItemID;
-(void)setServerZone:(id)arg1 ;
-(void)addAcceptOperation:(id)arg1 forItemID:(id)arg2 ;
-(id)shareAcceptOperationForItemID:(id)arg1 ;
-(void)removeAllShareAcceptationSidefaults;
-(PQLResultSet*)shareAcceptationSidefaultEnumerator;
@end
