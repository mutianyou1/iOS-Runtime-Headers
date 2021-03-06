/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSMutableArray, NSArray;

@interface ASMeetingResponseResponse : ASItem {

	NSMutableArray* _mSingularResponses;

}

@property (nonatomic,retain) NSMutableArray * mSingularResponses;              //@synthesize mSingularResponses=_mSingularResponses - In the implementation block
@property (nonatomic,readonly) NSArray * singularResponses; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(id)description;
-(NSArray *)singularResponses;
-(void)setMSingularResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mSingularResponses;
-(void)_addSingularResponse:(id)arg1 ;
@end

