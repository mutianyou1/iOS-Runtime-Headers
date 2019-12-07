/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDAudioCodecGroup : HMDNumberParser <NSCopying, NSSecureCoding> {

	unsigned long long _codec;

}

@property (nonatomic,readonly) unsigned long long codec;              //@synthesize codec=_codec - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithCodecs:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)codec;
-(id)initWithTLVData:(id)arg1 ;
-(id)initWithAudioCodecGroup:(unsigned long long)arg1 ;
@end
