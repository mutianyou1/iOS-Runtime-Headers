/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface GEOCapturedState : NSObject <NSKeyedArchiverDelegate, NSSecureCoding>

@property (readonly) NSData * stateData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(const char*)decoderType;
+(id)fromStateData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(NSData *)stateData;
@end

