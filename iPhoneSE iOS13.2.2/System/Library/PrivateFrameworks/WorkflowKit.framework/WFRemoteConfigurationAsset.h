/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, NSString, WFFileRepresentation, NSNumber;

@interface WFRemoteConfigurationAsset : NSObject <WFCloudKitItem> {

	CKRecordID* identifier;
	NSString* _assetType;
	NSString* _shortVersion;
	WFFileRepresentation* _assetDataFile;
	NSString* _configuration;
	NSNumber* _buildNumber;

}

@property (nonatomic,retain) NSString * assetType;                              //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) NSString * shortVersion;                           //@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * assetDataFile;              //@synthesize assetDataFile=_assetDataFile - In the implementation block
@property (nonatomic,copy) NSString * configuration;                            //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSNumber * buildNumber;                              //@synthesize buildNumber=_buildNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier; 
+(id)properties;
+(id)recordType;
-(CKRecordID *)identifier;
-(void)setConfiguration:(NSString *)arg1 ;
-(NSString *)configuration;
-(NSString *)assetType;
-(void)setAssetType:(NSString *)arg1 ;
-(NSNumber *)buildNumber;
-(void)setBuildNumber:(NSNumber *)arg1 ;
-(NSString *)shortVersion;
-(void)setShortVersion:(NSString *)arg1 ;
-(WFFileRepresentation *)assetDataFile;
-(void)setAssetDataFile:(WFFileRepresentation *)arg1 ;
@end

