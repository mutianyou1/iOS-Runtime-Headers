/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class NSDate;

@interface WFDateContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) NSDate * date; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
-(NSDate *)date;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)richListTitle;
@end
