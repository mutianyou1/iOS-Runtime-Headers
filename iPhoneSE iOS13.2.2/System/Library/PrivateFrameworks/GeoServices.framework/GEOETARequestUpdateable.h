/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class GEOETATrafficUpdateRequest, GEODataConditionalConnectionProperties, NSString;

@interface GEOETARequestUpdateable : GEOXPCRequest <GEOXPCRequest> {

	GEOETATrafficUpdateRequest* _request;
	GEODataConditionalConnectionProperties* _connectionProperties;

}

@property (nonatomic,retain) GEOETATrafficUpdateRequest * request;                                       //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) GEODataConditionalConnectionProperties * connectionProperties;              //@synthesize connectionProperties=_connectionProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)replyClass;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequest:(GEOETATrafficUpdateRequest *)arg1 ;
-(GEOETATrafficUpdateRequest *)request;
-(GEODataConditionalConnectionProperties *)connectionProperties;
-(BOOL)expectsReply;
-(void)setConnectionProperties:(GEODataConditionalConnectionProperties *)arg1 ;
@end

