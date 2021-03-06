/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UINavigationBar.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>

@class NSMapTable, NSString;

@interface CPSNavigationBar : UINavigationBar <CPSLinearFocusProviding> {

	NSMapTable* _lastFocusedItems;

}

@property (nonatomic,retain) NSMapTable * lastFocusedItems;              //@synthesize lastFocusedItems=_lastFocusedItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)didMoveToSuperview;
-(id)popNavigationItemAnimated:(BOOL)arg1 ;
-(id)_linearFocusItems;
-(NSMapTable *)lastFocusedItems;
-(void)setLastFocusedItems:(NSMapTable *)arg1 ;
@end

