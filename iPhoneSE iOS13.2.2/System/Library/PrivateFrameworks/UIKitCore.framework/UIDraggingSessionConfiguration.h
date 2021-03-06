/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, UIDraggingSystemTouchRoutingPolicy, PBItemCollection, NSXPCListenerEndpoint, NSString;

@interface UIDraggingSessionConfiguration : NSObject <NSSecureCoding> {

	BOOL _supportsSystemDrag;
	NSArray* _touchIDs;
	UIDraggingSystemTouchRoutingPolicy* _routingPolicy;
	PBItemCollection* _itemCollection;
	NSXPCListenerEndpoint* _dataProviderEndpoint;
	NSXPCListenerEndpoint* _axEndpoint;
	NSString* _sceneIdentifier;
	CGPoint _initialCentroid;

}

@property (nonatomic,retain) NSArray * touchIDs;                                              //@synthesize touchIDs=_touchIDs - In the implementation block
@property (assign,nonatomic) CGPoint initialCentroid;                                         //@synthesize initialCentroid=_initialCentroid - In the implementation block
@property (nonatomic,retain) UIDraggingSystemTouchRoutingPolicy * routingPolicy;              //@synthesize routingPolicy=_routingPolicy - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * axEndpoint;                              //@synthesize axEndpoint=_axEndpoint - In the implementation block
@property (nonatomic,retain) PBItemCollection * itemCollection;                               //@synthesize itemCollection=_itemCollection - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * dataProviderEndpoint;                    //@synthesize dataProviderEndpoint=_dataProviderEndpoint - In the implementation block
@property (assign,nonatomic) BOOL supportsSystemDrag;                                         //@synthesize supportsSystemDrag=_supportsSystemDrag - In the implementation block
@property (nonatomic,retain) NSString * sceneIdentifier;                                      //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSupportsSystemDrag:(BOOL)arg1 ;
-(UIDraggingSystemTouchRoutingPolicy *)routingPolicy;
-(NSArray *)touchIDs;
-(NSXPCListenerEndpoint *)axEndpoint;
-(void)setItemCollection:(PBItemCollection *)arg1 ;
-(void)setDataProviderEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(PBItemCollection *)itemCollection;
-(NSString *)sceneIdentifier;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(CGPoint)initialCentroid;
-(NSXPCListenerEndpoint *)dataProviderEndpoint;
-(BOOL)supportsSystemDrag;
-(void)setTouchIDs:(NSArray *)arg1 ;
-(void)setInitialCentroid:(CGPoint)arg1 ;
-(void)setRoutingPolicy:(UIDraggingSystemTouchRoutingPolicy *)arg1 ;
-(void)setAxEndpoint:(NSXPCListenerEndpoint *)arg1 ;
@end

