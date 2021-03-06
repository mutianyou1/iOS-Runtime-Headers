/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PPConnectionsCriteria : NSObject <NSSecureCoding> {

	unsigned char _locationField;
	NSString* _bundleIdentifier;

}

@property (assign,nonatomic) unsigned char locationField;              //@synthesize locationField=_locationField - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithLocationField:(unsigned char)arg1 bundleIdentifier:(id)arg2 ;
-(unsigned char)locationField;
-(void)setLocationField:(unsigned char)arg1 ;
@end

