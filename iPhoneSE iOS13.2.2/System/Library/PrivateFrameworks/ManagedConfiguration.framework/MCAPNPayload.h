/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAPNPayload : MCPayload {

	NSArray* _apnInfos;
	BOOL _wasInstalled;

}

@property (assign,nonatomic) BOOL wasInstalled;              //@synthesize wasInstalled=_wasInstalled - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(id)apnDomainName;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(id)_validationErrorType:(long long)arg1 forInvalidKey:(id)arg2 ;
-(BOOL)_checkForValidContents:(id)arg1 outError:(id*)arg2 ;
-(void)_finishInitializationWithContents:(id)arg1 ;
-(id)_strippedAPNDefaults;
-(id)apnDefaults;
-(BOOL)wasInstalled;
-(void)setWasInstalled:(BOOL)arg1 ;
@end

