/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface WFTagFactory : NSObject {

	NSMutableDictionary* sharedTags;

}
+(id)defaultFactory;
+(id)tagsForWebpage:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)tagWithClass:(Class)arg1 webpage:(id)arg2 ;
@end

