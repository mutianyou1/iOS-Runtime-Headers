/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CRKCardSectionView <NSObject>
@property (nonatomic,copy) NSString * cardSectionViewIdentifier; 
@property (assign,nonatomic,__weak) UIView*<CRKComposableView> composedSuperview; 
@required
+(CGSize*)sizeThatFitsCardSection:(id)arg1 boundingSize:(CGSize)arg2;
-(CGSize*)sizeThatFits:(CGSize)arg1;
-(void)removeFromComposedSuperview;
-(NSString *)cardSectionViewIdentifier;
-(void)setCardSectionViewIdentifier:(id)arg1;
-(UIView*<CRKComposableView>)composedSuperview;
-(void)setComposedSuperview:(id)arg1;

@end

