/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface OITSUFormatObject : NSObject <NSCopying, NSMutableCopying> {

	SCD_Struct_OI34 mFormatStruct;
	BOOL mUseExpandedContents;

}

@property (nonatomic,readonly) BOOL useExpandedContents; 
@property (nonatomic,readonly) SCD_Struct_OI38 formatStruct; 
+(id)defaultDateFormat:(id)arg1 ;
+(id)defaultDurationFormat;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_OI38)arg1 ;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_OI38)arg1 useExpandedContents:(BOOL)arg2 ;
-(SCD_Struct_OI38)formatStruct;
-(BOOL)useExpandedContents;
-(void)p_setFormatStruct:(SCD_Struct_OI38)arg1 ;
@end

