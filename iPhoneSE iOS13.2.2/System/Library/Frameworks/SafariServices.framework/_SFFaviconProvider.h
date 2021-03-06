/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariShared/WBSFaviconProvider.h>

@class NSCache;

@interface _SFFaviconProvider : WBSFaviconProvider {

	NSCache* _monogramTitleToImageCache;

}
-(id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(CGSize)arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(BOOL)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(/*^block*/id)arg7 ;
-(id)fallbackIconForRequest:(id)arg1 ;
@end

