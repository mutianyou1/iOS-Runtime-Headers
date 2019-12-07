/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneParameters.h>

@class FBSDisplayConfiguration, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings;

@interface FBSMutableSceneParameters : FBSSceneParameters {

	FBSDisplayConfiguration* _displayConfiguration;

}

@property (setter=_setSpecification:,nonatomic,copy) FBSSceneSpecification * specification; 
@property (nonatomic,copy) FBSSceneSettings * settings; 
@property (nonatomic,copy) FBSSceneClientSettings * clientSettings; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(void)setDisplay:(id)arg1 ;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)_setSpecification:(id)arg1 ;
@end
