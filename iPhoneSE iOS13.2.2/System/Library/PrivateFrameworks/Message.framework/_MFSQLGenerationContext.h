/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDSearchableIndex, EFMutableInt64Set, EFSQLPropertyMapper;

@interface _MFSQLGenerationContext : NSObject {

	EDSearchableIndex* searchableIndex;
	EFMutableInt64Set* mailboxIDs;
	unsigned tables;
	unsigned baseTable;
	EFSQLPropertyMapper* propertyMapper;
	BOOL usedBaseTable;
	BOOL haveLibraryIDCriterion;
	BOOL protectedDataAvailable;

}
@end
