/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REElementDataSource.h>

@class NTKUpNextElementDataSource;

@interface NTKUpNextNewsDataSource : REElementDataSource {

	NTKUpNextElementDataSource* _newsDataSourceProxy;

}

@property (nonatomic,retain) NTKUpNextElementDataSource * newsDataSourceProxy;              //@synthesize newsDataSourceProxy=_newsDataSourceProxy - In the implementation block
+(id)bundleIdentifier;
+(BOOL)wantsReloadForSignificantTimeChange;
+(unsigned long long)elementContentMode;
+(Class)nanoNewsDataSourceClass;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)pause;
-(void)resume;
-(void)setState:(unsigned long long)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(id)supportedSections;
-(void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getElementsInSection:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setAllowsLocationUse:(BOOL)arg1 ;
-(NTKUpNextElementDataSource *)newsDataSourceProxy;
-(void)setNewsDataSourceProxy:(NTKUpNextElementDataSource *)arg1 ;
@end
