/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecSchema.h>

@class WBSParsecSchema;

@interface _WBSParsecArraySchema : WBSParsecSchema {

	WBSParsecSchema* _elementSchema;

}

@property (nonatomic,retain) WBSParsecSchema * elementSchema;              //@synthesize elementSchema=_elementSchema - In the implementation block
-(id)initWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3 ;
-(BOOL)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(WBSParsecSchema *)elementSchema;
-(void)setElementSchema:(WBSParsecSchema *)arg1 ;
@end
