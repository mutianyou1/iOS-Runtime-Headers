/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNGroup;

@interface CNChangeHistoryRemoveSubgroupFromGroupEvent : CNChangeHistoryEvent {

	CNGroup* _subgroup;
	CNGroup* _group;

}

@property (nonatomic,readonly) CNGroup * subgroup;              //@synthesize subgroup=_subgroup - In the implementation block
@property (nonatomic,readonly) CNGroup * group;                 //@synthesize group=_group - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNGroup *)group;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithSubgroup:(id)arg1 group:(id)arg2 ;
-(CNGroup *)subgroup;
@end

