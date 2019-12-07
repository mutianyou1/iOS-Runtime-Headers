/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SXComponents;


@protocol SXDOMObjectProviding <NSObject>
@property (nonatomic,readonly) id<SXDocumentStyle> documentStyle; 
@property (nonatomic,readonly) SXComponents * components; 
@property (nonatomic,readonly) id<SXAutoPlacement> autoPlacement; 
@required
-(SXComponents *)components;
-(id)componentLayoutForIdentifier:(id)arg1;
-(id)componentStyleForIdentifier:(id)arg1;
-(id)componentStyleForComponent:(id)arg1;
-(id)componentStyleForIdentifiers:(id)arg1;
-(id)textStyleForIdentifier:(id)arg1;
-(id)componentTextStyleForIdentifiers:(id)arg1;
-(id)componentTextStyleForIdentifier:(id)arg1 classification:(id)arg2;
-(id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
-(id)resourceForIdentifier:(id)arg1;
-(id)imageResourceForIdentifier:(id)arg1;
-(id<SXDocumentStyle>)documentStyle;
-(id<SXAutoPlacement>)autoPlacement;

@end
