/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSIndexSet;

@interface _SlotDescriptor : NSObject {

	long long _family;
	NSArray* _typesRankedList;
	NSIndexSet* _possibleTypes;

}

@property (nonatomic,readonly) long long family;                        //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) NSArray * typesRankedList;               //@synthesize typesRankedList=_typesRankedList - In the implementation block
@property (nonatomic,readonly) NSIndexSet * possibleTypes;              //@synthesize possibleTypes=_possibleTypes - In the implementation block
+(id)descriptorWithComplicationFamily:(long long)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(id)arg3 ;
-(long long)family;
-(BOOL)supportsType:(unsigned long long)arg1 ;
-(NSIndexSet *)possibleTypes;
-(BOOL)allowsType:(unsigned long long)arg1 inFace:(id)arg2 ;
-(NSArray *)typesRankedList;
@end

