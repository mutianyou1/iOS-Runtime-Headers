/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIMenuBuilder, NSArray, UIMenu;

@interface UIMenuSystem : NSObject {

	_UIMenuBuilder* _defaultBuilder;
	_UIMenuBuilder* _automaticallyRebuildingBuilder;
	BOOL _shouldAutomaticallyRebuild;

}

@property (nonatomic,readonly) BOOL shouldAutomaticallyRebuild;              //@synthesize shouldAutomaticallyRebuild=_shouldAutomaticallyRebuild - In the implementation block
@property (nonatomic,readonly) NSArray * _keyCommands; 
@property (nonatomic,readonly) UIMenu * _rootMenu; 
+(id)mainSystem;
+(id)contextSystem;
-(NSArray *)_keyCommands;
-(id)initWithDefaultBuilder:(id)arg1 shouldAutomaticallyRebuild:(BOOL)arg2 ;
-(void)_automaticallyRebuildIfNeeded;
-(id)_newBuilderFromResponderChain:(id)arg1 ;
-(UIMenu *)_rootMenu;
-(void)setNeedsRebuild;
-(void)setNeedsRevalidate;
-(BOOL)shouldAutomaticallyRebuild;
@end

