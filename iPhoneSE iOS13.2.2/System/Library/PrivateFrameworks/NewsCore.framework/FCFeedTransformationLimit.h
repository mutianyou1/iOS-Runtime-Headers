/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSString;

@interface FCFeedTransformationLimit : NSObject <FCFeedTransforming> {

	unsigned long long _limit;

}

@property (assign,nonatomic) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
@end

