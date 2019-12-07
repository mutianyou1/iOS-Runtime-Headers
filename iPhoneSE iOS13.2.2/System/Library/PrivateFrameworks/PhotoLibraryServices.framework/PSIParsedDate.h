/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSDictionary;

@interface PSIParsedDate : NSObject {

	NSDictionary* _attributes;
	NSRange _range;
	NSRange _extensionRange;

}

@property (nonatomic,copy,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSRange range;                               //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSRange extensionRange;                      //@synthesize extensionRange=_extensionRange - In the implementation block
-(NSDictionary *)attributes;
-(NSRange)range;
-(id)initWithAttributes:(id)arg1 range:(NSRange)arg2 extensionRange:(NSRange)arg3 ;
-(NSRange)extensionRange;
@end
