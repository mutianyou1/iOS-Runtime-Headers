/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _TVShadowViewElementID, NSArray;

@interface _TVShadowViewElement : NSObject {

	_TVShadowViewElementID* _elementID;
	NSArray* _children;
	_TVShadowViewElement* _parent;

}

@property (nonatomic,copy) _TVShadowViewElementID * elementID;                  //@synthesize elementID=_elementID - In the implementation block
@property (nonatomic,copy) NSArray * children;                                  //@synthesize children=_children - In the implementation block
@property (assign,nonatomic,__weak) _TVShadowViewElement * parent;              //@synthesize parent=_parent - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(_TVShadowViewElement *)parent;
-(void)setParent:(_TVShadowViewElement *)arg1 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setElementID:(_TVShadowViewElementID *)arg1 ;
-(_TVShadowViewElementID *)elementID;
@end

