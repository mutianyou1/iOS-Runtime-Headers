/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CTEnhancedLinkQualityMetric : NSObject <NSCopying, NSSecureCoding> {

	NSData* _enhancedLinkQuality;

}

@property (nonatomic,retain) NSData * enhancedLinkQuality;              //@synthesize enhancedLinkQuality=_enhancedLinkQuality - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)enhancedLinkQuality;
-(void)setEnhancedLinkQuality:(NSData *)arg1 ;
-(id)initWithEnhancedLinkQuality:(id)arg1 ;
@end

