/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPUnionCollection.h>
#import <libobjc.A.dylib/FPSearchQueryResultsProviding.h>

@class NSFileProviderSearchQuery, FPSearchCollection, FPTrashUnionCollection, NSPredicate;

@interface FPSearchTrashCollection : FPUnionCollection <FPSearchQueryResultsProviding> {

	FPSearchCollection* _searchCollection;
	FPTrashUnionCollection* _trashCollection;
	NSPredicate* _searchQueryPredicate;
	unsigned long long _selectedMembership;

}

@property (nonatomic,copy) NSFileProviderSearchQuery * searchQuery; 
-(id)init;
-(NSFileProviderSearchQuery *)searchQuery;
-(void)setSearchQuery:(NSFileProviderSearchQuery *)arg1 ;
-(BOOL)isCollectionValidForItem:(id)arg1 ;
-(id)scopedSearchQuery;
@end
