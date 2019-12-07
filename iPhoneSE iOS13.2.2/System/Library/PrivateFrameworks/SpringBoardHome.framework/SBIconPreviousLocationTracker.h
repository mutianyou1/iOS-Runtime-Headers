/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, SBHIconModel;

@interface SBIconPreviousLocationTracker : NSObject {

	NSMapTable* _previousIconLocations;
	SBHIconModel* _iconModel;

}

@property (nonatomic,retain) SBHIconModel * iconModel;              //@synthesize iconModel=_iconModel - In the implementation block
-(SBHIconModel *)iconModel;
-(void)captureLocationInfoForIcon:(id)arg1 inModel:(id)arg2 ;
-(id)previousLocationInfoForIcon:(id)arg1 ;
-(void)setIconModel:(SBHIconModel *)arg1 ;
@end
