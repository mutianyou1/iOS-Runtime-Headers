/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface WFListEditorUpdateItem : NSObject {

	NSNumber* _indexBeforeUpdate;
	NSNumber* _indexAfterUpdate;
	unsigned long long _updateAction;

}

@property (nonatomic,readonly) NSNumber * indexBeforeUpdate;                 //@synthesize indexBeforeUpdate=_indexBeforeUpdate - In the implementation block
@property (nonatomic,readonly) NSNumber * indexAfterUpdate;                  //@synthesize indexAfterUpdate=_indexAfterUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long updateAction;              //@synthesize updateAction=_updateAction - In the implementation block
+(id)itemInsertedAtIndex:(unsigned long long)arg1 ;
+(id)itemDeletedAtIndex:(unsigned long long)arg1 ;
+(id)itemUpdatedAtIndex:(unsigned long long)arg1 ;
+(id)itemMovedFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)updateAction;
-(id)initWithAction:(unsigned long long)arg1 indexBeforeUpdate:(id)arg2 indexAfterUpdate:(id)arg3 ;
-(NSNumber *)indexBeforeUpdate;
-(NSNumber *)indexAfterUpdate;
@end
