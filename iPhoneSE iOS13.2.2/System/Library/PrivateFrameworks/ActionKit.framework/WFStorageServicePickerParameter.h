/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFiCloudDriveAccessResource;

@interface WFStorageServicePickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	WFiCloudDriveAccessResource* _iCloudDriveAccessResource;

}

@property (nonatomic,retain) WFiCloudDriveAccessResource * iCloudDriveAccessResource;              //@synthesize iCloudDriveAccessResource=_iCloudDriveAccessResource - In the implementation block
+(id)referencedActionResourceClasses;
-(BOOL)isHidden;
-(id)possibleStates;
-(id)defaultSupportedVariableTypes;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)setActionResources:(id)arg1 ;
-(WFiCloudDriveAccessResource *)iCloudDriveAccessResource;
-(void)setICloudDriveAccessResource:(WFiCloudDriveAccessResource *)arg1 ;
@end
