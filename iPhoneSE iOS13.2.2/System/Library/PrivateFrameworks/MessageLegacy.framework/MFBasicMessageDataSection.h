/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMessageDataSection.h>

@class MFDataHolder, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection> {

	MFDataHolder* _dataHolder;
	BOOL _complete;
	BOOL _partial;
	NSString* _partName;

}

@property (assign,getter=isPartial,nonatomic) BOOL partial;                //@synthesize partial=_partial - In the implementation block
@property (assign,getter=isComplete,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) MFDataHolder * dataHolder;                    //@synthesize dataHolder=_dataHolder - In the implementation block
@property (nonatomic,retain) NSString * partName;                          //@synthesize partName=_partName - In the implementation block
-(void)setData:(id)arg1 ;
-(BOOL)isComplete;
-(void)setComplete:(BOOL)arg1 ;
-(NSString *)partName;
-(void)setPartName:(NSString *)arg1 ;
-(BOOL)isPartial;
-(MFDataHolder *)dataHolder;
-(void)setDataHolder:(MFDataHolder *)arg1 ;
-(void)setPartial:(BOOL)arg1 ;
@end
