/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAirPlayPayload : MCPayload {

	NSArray* _whitelistDestinations;
	NSArray* _destinationsWithPasswords;
	NSArray* _titlesAndDescriptions;

}

@property (nonatomic,retain) NSArray * titlesAndDescriptions;                  //@synthesize titlesAndDescriptions=_titlesAndDescriptions - In the implementation block
@property (nonatomic,retain) NSArray * whitelistDestinations;                  //@synthesize whitelistDestinations=_whitelistDestinations - In the implementation block
@property (nonatomic,retain) NSArray * destinationsWithPasswords;              //@synthesize destinationsWithPasswords=_destinationsWithPasswords - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setWhitelistDestinations:(NSArray *)arg1 ;
-(void)setDestinationsWithPasswords:(NSArray *)arg1 ;
-(NSArray *)whitelistDestinations;
-(NSArray *)destinationsWithPasswords;
-(NSArray *)titlesAndDescriptions;
-(void)setTitlesAndDescriptions:(NSArray *)arg1 ;
@end
