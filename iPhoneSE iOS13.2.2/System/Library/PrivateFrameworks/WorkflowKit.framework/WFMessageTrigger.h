/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSString, NSArray;

@interface WFMessageTrigger : WFTrigger {

	NSString* _selectedContents;
	NSArray* _selectedSenders;
	NSArray* _selectedSendersStrings;

}

@property (nonatomic,retain) NSString * selectedContents;                   //@synthesize selectedContents=_selectedContents - In the implementation block
@property (nonatomic,retain) NSArray * selectedSenders;                     //@synthesize selectedSenders=_selectedSenders - In the implementation block
@property (nonatomic,retain) NSArray * selectedSendersStrings;              //@synthesize selectedSendersStrings=_selectedSendersStrings - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(NSArray *)selectedSenders;
-(void)setSelectedSenders:(NSArray *)arg1 ;
-(NSString *)selectedContents;
-(void)setSelectedContents:(NSString *)arg1 ;
-(NSArray *)selectedSendersStrings;
-(void)setSelectedSendersStrings:(NSArray *)arg1 ;
@end
