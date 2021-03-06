/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDescriptor.h>

@class BKSHIDEventDescriptor;

@interface BKSHIDEventSenderSpecificDescriptor : BKSHIDEventDescriptor {

	unsigned long long _senderID;
	BKSHIDEventDescriptor* _sourceDescriptor;

}

@property (nonatomic,retain) BKSHIDEventDescriptor * sourceDescriptor;              //@synthesize sourceDescriptor=_sourceDescriptor - In the implementation block
@property (readonly) unsigned long long senderID;                                   //@synthesize senderID=_senderID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)senderID;
-(BOOL)describes:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 senderID:(unsigned long long)arg2 ;
-(id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)arg1 ;
-(BOOL)matchesHIDEvent:(IOHIDEventRef)arg1 ;
-(BKSHIDEventDescriptor *)sourceDescriptor;
-(void)setSourceDescriptor:(BKSHIDEventDescriptor *)arg1 ;
@end

