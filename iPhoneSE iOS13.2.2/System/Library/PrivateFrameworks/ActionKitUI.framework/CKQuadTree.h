/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKQuadTreeNode;

@interface CKQuadTree : NSObject {

	CKQuadTreeNode* _rootNode;

}

@property (nonatomic,readonly) CKQuadTreeNode * rootNode;              //@synthesize rootNode=_rootNode - In the implementation block
-(id)init;
-(CKQuadTreeNode *)rootNode;
-(id)initWithPoints:(id)arg1 ;
-(void)visit:(/*^block*/id)arg1 ;
@end

