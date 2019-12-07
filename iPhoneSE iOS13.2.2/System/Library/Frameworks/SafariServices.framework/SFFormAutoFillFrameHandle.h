/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WBUFormAutoFillFrameHandle.h>

@class NSURL, _WKFrameHandle, NSString;

@interface SFFormAutoFillFrameHandle : NSObject <NSCopying, NSSecureCoding, WBUFormAutoFillFrameHandle> {

	NSURL* _URL;
	SecTrustRef _serverTrust;
	_WKFrameHandle* _frameHandle;

}

@property (nonatomic,readonly) _WKFrameHandle * frameHandle;               //@synthesize frameHandle=_frameHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * webui_URL; 
@property (nonatomic,readonly) SecTrustRef webui_serverTrust; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_WKFrameHandle *)frameHandle;
-(id)initWithFrameHandle:(id)arg1 URL:(id)arg2 serverTrust:(SecTrustRef)arg3 ;
-(NSURL *)webui_URL;
-(SecTrustRef)webui_serverTrust;
-(id)initWithWebProcessPlugInFrame:(id)arg1 ;
@end
