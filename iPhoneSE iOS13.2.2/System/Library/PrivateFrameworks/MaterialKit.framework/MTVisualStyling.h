/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTCoreMaterialVisualStyling, UIColor, CAFilter, NSString;

@interface MTVisualStyling : NSObject {

	MTCoreMaterialVisualStyling* _coreMaterialVisualStyling;

}

@property (nonatomic,copy,readonly) UIColor * color; 
@property (nonatomic,readonly) double alpha; 
@property (nonatomic,readonly) CAFilter * composedFilter; 
@property (nonatomic,copy,readonly) NSString * visualStyleSetName; 
@property (nonatomic,copy,readonly) NSString * visualStyleName; 
@property (getter=_coreMaterialVisualStyling,nonatomic,retain) MTCoreMaterialVisualStyling * coreMaterialVisualStyling;              //@synthesize coreMaterialVisualStyling=_coreMaterialVisualStyling - In the implementation block
-(UIColor *)color;
-(double)alpha;
-(id)visualEffect;
-(NSString *)visualStyleSetName;
-(NSString *)visualStyleName;
-(id)initWithCoreMaterialVisualStyling:(id)arg1 ;
-(id)_layerConfig;
-(id)_coreMaterialVisualStyling;
-(void)setCoreMaterialVisualStyling:(MTCoreMaterialVisualStyling *)arg1 ;
-(CAFilter *)composedFilter;
@end

