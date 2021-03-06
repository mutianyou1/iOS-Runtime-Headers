/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class RKMontrealModel, RKNLEventTokenizer;

@interface RKEventIdentifier : NSObject {

	RKMontrealModel* _model;
	RKNLEventTokenizer* _tokenizer;
	const IOMappings* _ioMappings;
	int _outputPermutation[5];

}
-(id)init;
-(id)initWithLanguageID:(id)arg1 ;
-(id)_identifyOwnedTokenSequences:(id)arg1 ;
-(id)_identifyStrings:(id)arg1 otherDateCount:(unsigned long long)arg2 otherDates:(RKEventIdentifierRange*)arg3 ;
-(void)resetEventIdentifierModel;
-(id)identifyStrings:(id)arg1 ;
-(id)identifyText:(id)arg1 ;
-(id)identifyMessage:(id)arg1 ;
@end

