/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAutoPlacement.h>

@protocol SXAdvertisementPlacementType, SXSuggestedArticlesPlacementType;
@class NSString;

@interface SXResolvedAutoPlacement : NSObject <SXAutoPlacement> {

	id<SXAdvertisementPlacementType> _advertisement;
	id<SXSuggestedArticlesPlacementType> _suggestedArticles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXAdvertisementPlacementType> advertisement;                      //@synthesize advertisement=_advertisement - In the implementation block
@property (nonatomic,readonly) id<SXSuggestedArticlesPlacementType> suggestedArticles;              //@synthesize suggestedArticles=_suggestedArticles - In the implementation block
-(id<SXAdvertisementPlacementType>)advertisement;
-(id<SXSuggestedArticlesPlacementType>)suggestedArticles;
-(id)initWithAdvertisement:(id)arg1 suggestedArticles:(id)arg2 ;
@end
