/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>

@class TLKSimpleRowView;

@interface SearchUIRowCardSectionView : SearchUICardSectionView

@property (nonatomic,retain) TLKSimpleRowView * contentView; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(id)dragTitleForCardSection:(id)arg1 ;
+(id)dragSubtitleForCardSection:(id)arg1 ;
+(double)separatorInsetForLeadingImageForSection:(id)arg1 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
@end

