/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class MCAPNConfiguration, NSArray;

@interface MCCellularPayload : MCPayload {

	MCAPNConfiguration* _attachAPN;
	NSArray* _APNs;

}

@property (nonatomic,retain) MCAPNConfiguration * attachAPN;              //@synthesize attachAPN=_attachAPN - In the implementation block
@property (nonatomic,retain) NSArray * APNs;                              //@synthesize APNs=_APNs - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)installationWarnings;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(MCAPNConfiguration *)attachAPN;
-(NSArray *)APNs;
-(id)attachAPNConfigurationLabel;
-(id)APNsLabel;
-(id)APNConfigurationDescription;
-(id)APNsDescription;
-(void)setAttachAPN:(MCAPNConfiguration *)arg1 ;
-(void)setAPNs:(NSArray *)arg1 ;
@end

