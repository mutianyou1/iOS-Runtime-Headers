/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, ICIAMApplicationMessage, NSDictionary;

@interface ICInAppMessageEntry : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSMutableDictionary* _metadata;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _resourceCache;
	BOOL _shouldDownloadResources;
	ICIAMApplicationMessage* _applicationMessage;

}

@property (nonatomic,readonly) ICIAMApplicationMessage * applicationMessage;              //@synthesize applicationMessage=_applicationMessage - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (assign,nonatomic) BOOL shouldDownloadResources;                                //@synthesize shouldDownloadResources=_shouldDownloadResources - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSDictionary *)metadata;
-(void)clearCachedResources;
-(ICIAMApplicationMessage *)applicationMessage;
-(id)initWithApplicationMessage:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setShouldDownloadResources:(BOOL)arg1 ;
-(BOOL)shouldDownloadResources;
-(id)cachedLocationForResourceWithIdentifier:(id)arg1 ;
-(void)setCacheLocation:(id)arg1 forResourceWithIdentifier:(id)arg2 ;
-(void)updateMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)allCachedResourceLocations;
@end

