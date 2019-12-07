/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QLCacheVersionedFileIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class QLCacheBasicFileIdentifier;

@interface QLCacheBasicVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>

@property (readonly) QLCacheBasicFileIdentifier * fileIdentifier; 
-(id)initWithThumbnailRequest:(id)arg1 ;
-(id)initWithFileIdentifier:(id)arg1 version:(id)arg2 ;
@end
