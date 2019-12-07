/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MCDeviceUploadDeviceDetails : NSObject <NSSecureCoding> {

	NSString* _serialNumber;
	NSString* _deviceUploadStatus;
	NSString* _errorMessage;

}

@property (nonatomic,readonly) NSString * serialNumber;                    //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSString * deviceUploadStatus;              //@synthesize deviceUploadStatus=_deviceUploadStatus - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;                    //@synthesize errorMessage=_errorMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDict:(id)arg1 ;
-(NSString *)serialNumber;
-(NSString *)deviceUploadStatus;
-(NSString *)errorMessage;
@end
