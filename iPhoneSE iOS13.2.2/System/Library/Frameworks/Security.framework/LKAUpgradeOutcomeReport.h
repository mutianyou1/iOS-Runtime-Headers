/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface LKAUpgradeOutcomeReport : NSObject {

	int _outcome;
	NSDictionary* _attributes;

}

@property (assign) int outcome;                            //@synthesize outcome=_outcome - In the implementation block
@property (retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)initWithOutcome:(int)arg1 attributes:(id)arg2 ;
-(int)outcome;
-(void)setOutcome:(int)arg1 ;
@end
