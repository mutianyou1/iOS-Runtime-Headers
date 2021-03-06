/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSDictionary, NSArray;

@interface EDAMBusinessQueryResult : FATObject {

	NSNumber* _totalNotebooks;
	NSDictionary* _totalNotesByNotebook;
	NSArray* _experts;
	NSArray* _matchingNotebooks;

}

@property (nonatomic,retain) NSNumber * totalNotebooks;                        //@synthesize totalNotebooks=_totalNotebooks - In the implementation block
@property (nonatomic,retain) NSDictionary * totalNotesByNotebook;              //@synthesize totalNotesByNotebook=_totalNotesByNotebook - In the implementation block
@property (nonatomic,retain) NSArray * experts;                                //@synthesize experts=_experts - In the implementation block
@property (nonatomic,retain) NSArray * matchingNotebooks;                      //@synthesize matchingNotebooks=_matchingNotebooks - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)experts;
-(void)setExperts:(NSArray *)arg1 ;
-(NSNumber *)totalNotebooks;
-(void)setTotalNotebooks:(NSNumber *)arg1 ;
-(NSDictionary *)totalNotesByNotebook;
-(void)setTotalNotesByNotebook:(NSDictionary *)arg1 ;
-(NSArray *)matchingNotebooks;
-(void)setMatchingNotebooks:(NSArray *)arg1 ;
@end

