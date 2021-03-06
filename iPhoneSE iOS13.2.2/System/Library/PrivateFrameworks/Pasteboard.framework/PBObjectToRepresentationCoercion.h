/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableOrderedSet;

@interface PBObjectToRepresentationCoercion : NSObject {

	Class _theClass;
	NSMutableDictionary* _coercionBlockByType;
	NSMutableOrderedSet* _typeOrder;

}

@property (nonatomic,retain) Class theClass;                                         //@synthesize theClass=_theClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coercionBlockByType;              //@synthesize coercionBlockByType=_coercionBlockByType - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * typeOrder;                        //@synthesize typeOrder=_typeOrder - In the implementation block
-(id)initWithClass:(Class)arg1 ;
-(void)addCoercionToType:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)availableExportTypes;
-(BOOL)canCoerceToType:(id)arg1 ;
-(void)createRepresentationOfType:(id)arg1 fromObject:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(Class)theClass;
-(void)setTheClass:(Class)arg1 ;
-(NSMutableDictionary *)coercionBlockByType;
-(void)setCoercionBlockByType:(NSMutableDictionary *)arg1 ;
-(NSMutableOrderedSet *)typeOrder;
-(void)setTypeOrder:(NSMutableOrderedSet *)arg1 ;
@end

