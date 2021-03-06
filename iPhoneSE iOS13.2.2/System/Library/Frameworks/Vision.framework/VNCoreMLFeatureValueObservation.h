/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class MLFeatureValue, NSString;

@interface VNCoreMLFeatureValueObservation : VNObservation {

	MLFeatureValue* _featureValue;
	NSString* _featureName;

}

@property (nonatomic,copy,readonly) MLFeatureValue * featureValue;              //@synthesize featureValue=_featureValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                     //@synthesize featureName=_featureName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 featureName:(id)arg2 featureValue:(id)arg3 ;
-(MLFeatureValue *)featureValue;
-(NSString *)featureName;
@end

