/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, WDDocument;

@interface WDCitationTable : NSObject {

	NSMutableDictionary* mCitations;
	WDDocument* mDocument;

}

@property (__weak,readonly) WDDocument * document; 
-(id)description;
-(unsigned long long)count;
-(id)initWithDocument:(id)arg1 ;
-(WDDocument *)document;
-(id)citationFor:(id)arg1 ;
-(void)addCitation:(id)arg1 forID:(id)arg2 ;
-(id)citationIDs;
@end

