/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _SFKeySpecifier, NSString;


@protocol _SFKeyAttributes <NSObject,NSCopying>
@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier; 
@property (nonatomic,copy,readonly) NSString * keyDomain; 
@required
+(id)alloc;
-(_SFKeySpecifier *)keySpecifier;
-(NSString *)keyDomain;

@end
