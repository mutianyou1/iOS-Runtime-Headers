/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/InfoKit.framework/InfoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InfoKit/InfoKit-Structs.h>
#import <InfoKit/INKContent.h>

@class TPSDiscoverabilityTip;

@interface INKTipContent : INKContent {

	TPSDiscoverabilityTip* _tip;

}

@property (nonatomic,readonly) TPSDiscoverabilityTip * tip;              //@synthesize tip=_tip - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TPSDiscoverabilityTip *)tip;
-(id)initWithTip:(id)arg1 dismissalEvents:(id)arg2 customizationID:(long long)arg3 ;
@end

