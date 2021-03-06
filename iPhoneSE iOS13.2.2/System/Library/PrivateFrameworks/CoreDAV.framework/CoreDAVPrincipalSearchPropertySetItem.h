/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {

	NSMutableSet* _principalSearchProperties;

}

@property (nonatomic,retain) NSMutableSet * principalSearchProperties;              //@synthesize principalSearchProperties=_principalSearchProperties - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(NSMutableSet *)principalSearchProperties;
-(void)addPrincipalSearchProperty:(id)arg1 ;
-(void)setPrincipalSearchProperties:(NSMutableSet *)arg1 ;
@end

