/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUSettings.h>

@protocol NUSettings <NSObject>
@property (nonatomic,readonly) BOOL shouldShowArticlesInExcerptMode; 
@required
-(BOOL)shouldShowArticlesInExcerptMode;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NUSettings : NSObject <NUSettings, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldShowArticlesInExcerptMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldShowArticlesInExcerptMode;
@end

