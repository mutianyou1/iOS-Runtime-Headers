/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface APResult : NSObject {

	NSString* _bundleIdentifier;
	NSString* _buyParams;
	NSString* _itemIdentifier;
	NSString* _productType;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * buyParams;                     //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;                //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * productType;                   //@synthesize productType=_productType - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)itemIdentifier;
-(NSString *)buyParams;
-(NSString *)productType;
-(id)compile;
-(id)initWithBundleIdentifier:(id)arg1 buyParams:(id)arg2 itemIdentifier:(id)arg3 productType:(id)arg4 ;
@end

