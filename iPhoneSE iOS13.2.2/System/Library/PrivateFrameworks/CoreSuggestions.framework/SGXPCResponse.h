/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface SGXPCResponse : NSObject <NSSecureCoding> {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)response;
+(id)responseWithError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)initWithError:(id)arg1 ;
@end
