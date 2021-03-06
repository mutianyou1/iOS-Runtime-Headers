/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/WDMedicalRecordBrandCell.h>

@class HKClinicalProviderSearchResult, NSArray;

@interface WDClinicalOnboardingSearchResultCell : WDMedicalRecordBrandCell {

	HKClinicalProviderSearchResult* _searchResult;
	NSArray* _searchTerms;

}

@property (nonatomic,copy) HKClinicalProviderSearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,copy) NSArray * searchTerms;                                      //@synthesize searchTerms=_searchTerms - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HKClinicalProviderSearchResult *)searchResult;
-(void)setSearchResult:(HKClinicalProviderSearchResult *)arg1 ;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(void)_updateLabelVisibility;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)setSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3 ;
-(void)_updateContentWithSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3 ;
@end

