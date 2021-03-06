/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDatabaseResult.h>

@class NSString, NSSortDescriptor;

@interface WFRealmDatabaseResult : WFDatabaseResult {

	Class _objectClass;
	NSString* _predicateFormat;
	NSSortDescriptor* _sortDescriptor;

}

@property (nonatomic,readonly) Class objectClass;                                   //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * predicateFormat;                     //@synthesize predicateFormat=_predicateFormat - In the implementation block
@property (nonatomic,copy,readonly) NSSortDescriptor * sortDescriptor;              //@synthesize sortDescriptor=_sortDescriptor - In the implementation block
-(NSString *)predicateFormat;
-(Class)objectClass;
-(NSSortDescriptor *)sortDescriptor;
-(id)initWithBackingStore:(id)arg1 objectClass:(Class)arg2 predicateFormat:(id)arg3 sortDescriptor:(id)arg4 ;
-(void)notifyObserversAboutChange:(id)arg1 ;
@end

