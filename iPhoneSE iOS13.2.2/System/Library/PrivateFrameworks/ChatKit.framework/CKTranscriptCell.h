/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionViewCell.h>

@interface CKTranscriptCell : CKEditableCollectionViewCell {

	BOOL _wantsDrawerLayout;
	char _orientation;
	double _drawerPercentRevealed;
	double _associatedItemOffset;

}

@property (assign,nonatomic) BOOL wantsDrawerLayout;                    //@synthesize wantsDrawerLayout=_wantsDrawerLayout - In the implementation block
@property (assign,nonatomic) char orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double drawerPercentRevealed;              //@synthesize drawerPercentRevealed=_drawerPercentRevealed - In the implementation block
@property (assign,nonatomic) double associatedItemOffset;               //@synthesize associatedItemOffset=_associatedItemOffset - In the implementation block
-(char)orientation;
-(void)prepareForReuse;
-(void)setOrientation:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(void)performHide:(/*^block*/id)arg1 ;
-(void)performReveal:(/*^block*/id)arg1 ;
-(BOOL)wantsDrawerLayout;
-(void)layoutSubviewsForDrawer;
-(double)drawerPercentRevealed;
-(void)layoutSubviewsForAlignmentContents;
-(double)associatedItemOffset;
-(void)layoutSubviewsForContents;
-(void)configureForChatItem:(id)arg1 ;
-(void)setDrawerPercentRevealed:(double)arg1 ;
-(void)setAssociatedItemOffset:(double)arg1 ;
-(void)setWantsDrawerLayout:(BOOL)arg1 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
@end

