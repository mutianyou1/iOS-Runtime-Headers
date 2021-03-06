/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDiscoveryObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSArray;

@interface PKDiscoveryItem : PKDiscoveryObject <NSSecureCoding, NSCopying> {

	BOOL _shouldBadge;
	long long _type;
	NSURL* _layoutBundleURL;
	NSArray* _supportedLocalizations;

}

@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * layoutBundleURL;                         //@synthesize layoutBundleURL=_layoutBundleURL - In the implementation block
@property (nonatomic,retain) NSArray * supportedLocalizations;              //@synthesize supportedLocalizations=_supportedLocalizations - In the implementation block
@property (assign,nonatomic) BOOL shouldBadge;                              //@synthesize shouldBadge=_shouldBadge - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)shouldBadge;
-(void)setShouldBadge:(BOOL)arg1 ;
-(NSURL *)layoutBundleURL;
-(NSArray *)supportedLocalizations;
-(void)updateForRuleResult:(BOOL)arg1 ;
-(void)updateWithDiscoveryItem:(id)arg1 ;
-(void)setLayoutBundleURL:(NSURL *)arg1 ;
-(void)setSupportedLocalizations:(NSArray *)arg1 ;
@end

