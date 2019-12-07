/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIDataMatrixCodeDescriptor : CIBarcodeDescriptor {

	NSData* errorCorrectedPayload;
	long long rowCount;
	long long columnCount;
	long long eccVersion;

}

@property (readonly) NSData * errorCorrectedPayload; 
@property (readonly) long long rowCount; 
@property (readonly) long long columnCount; 
@property (readonly) long long eccVersion; 
+(BOOL)supportsSecureCoding;
+(id)descriptorWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)rowCount;
-(long long)columnCount;
-(NSData *)errorCorrectedPayload;
-(id)initWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4 ;
-(long long)eccVersion;
@end
