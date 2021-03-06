/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCItemID, BRFieldCKInfo;

@interface BRCPCSChainInfo : NSObject {

	char _itemType;
	BRCItemID* _itemID;
	BRCItemID* _parentID;
	BRFieldCKInfo* _structuralCKInfo;
	BRFieldCKInfo* _contentCKInfo;

}

@property (nonatomic,readonly) BRCItemID * itemID;                            //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) BRCItemID * parentID;                          //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) BRFieldCKInfo * structuralCKInfo;              //@synthesize structuralCKInfo=_structuralCKInfo - In the implementation block
@property (nonatomic,readonly) BRFieldCKInfo * contentCKInfo;                 //@synthesize contentCKInfo=_contentCKInfo - In the implementation block
@property (nonatomic,readonly) char itemType;                                 //@synthesize itemType=_itemType - In the implementation block
-(BRCItemID *)itemID;
-(BRCItemID *)parentID;
-(char)itemType;
-(id)initWithItemID:(id)arg1 parentID:(id)arg2 structuralCKInfo:(id)arg3 contentCKInfo:(id)arg4 itemType:(char)arg5 ;
-(BRFieldCKInfo *)structuralCKInfo;
-(BRFieldCKInfo *)contentCKInfo;
@end

