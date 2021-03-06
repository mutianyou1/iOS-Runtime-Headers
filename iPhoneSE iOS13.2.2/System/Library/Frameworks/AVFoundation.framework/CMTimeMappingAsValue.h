/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeMappingAsValue : NSValue {

	SCD_Struct_CM11 _timeMapping;

}
+(BOOL)supportsSecureCoding;
+(id)valueWithCMTimeMapping:(SCD_Struct_CM11)arg1 ;
-(const char*)objCType;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(void)getValue:(void*)arg1 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(SCD_Struct_CM11)CMTimeMappingValue;
@end

