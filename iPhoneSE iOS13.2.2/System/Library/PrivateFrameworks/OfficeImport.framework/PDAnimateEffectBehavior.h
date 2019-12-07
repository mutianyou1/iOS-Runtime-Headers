/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {

	BOOL mHasTransition;
	int mTransition;
	NSMutableDictionary* mPropertyMap;

}

@property (nonatomic,retain) NSMutableDictionary * propertyMap; 
-(id)init;
-(int)transition;
-(void)setTransition:(int)arg1 ;
-(BOOL)hasProperties;
-(NSMutableDictionary *)propertyMap;
-(BOOL)hasTransition;
-(void)setPropertyMap:(NSMutableDictionary *)arg1 ;
@end
