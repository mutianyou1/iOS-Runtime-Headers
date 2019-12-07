/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HULinkedApplicationItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSLookupItem;

@interface HULinkedApplicationStoreItem : HULinkedApplicationItem <NSCopying> {

	SSLookupItem* _storeItem;

}

@property (nonatomic,readonly) SSLookupItem * storeItem;              //@synthesize storeItem=_storeItem - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bundleIdentifier;
-(SSLookupItem *)storeItem;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithStoreItem:(id)arg1 ;
-(id)_loadStoreIconWithArtwork:(id)arg1 ;
-(id)_imageForSize:(CGSize)arg1 fromArtwork:(id)arg2 ;
@end
