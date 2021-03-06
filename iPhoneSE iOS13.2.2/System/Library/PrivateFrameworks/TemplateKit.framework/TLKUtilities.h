/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TemplateKit/TemplateKit-Structs.h>
@interface TLKUtilities : NSObject
+(void)dispatchMainIfNecessary:(/*^block*/id)arg1 ;
+(double)onePixelForCurrentScreenResolution;
+(UIEdgeInsets)standardInsets;
+(double)standardTableCellContentInset;
+(id)testImageWithSize:(CGSize)arg1 text:(id)arg2 ;
+(BOOL)recursivelyCheckIfSubviewTapped:(id)arg1 forTappedView:(id)arg2 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)dispatchAsyncIfNecessary:(/*^block*/id)arg1 ;
+(BOOL)deviceSupportsRotation;
+(id)testImageWithSize:(CGSize)arg1 ;
+(void)performAnimatableChanges:(/*^block*/id)arg1 ;
@end

