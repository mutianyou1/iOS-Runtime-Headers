/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSData, NSMutableDictionary;

@interface ICDelegationPlayInfoTokenRequest : NSObject <NSCopying> {

	NSNumber* _DSID;
	NSData* _cloudCredentialsTokenData;
	NSData* _SICData;

}

@property (nonatomic,copy) NSNumber * DSID;                                                        //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSData * cloudCredentialsTokenData;                                     //@synthesize cloudCredentialsTokenData=_cloudCredentialsTokenData - In the implementation block
@property (setter=ICData,nonatomic,copy) NSData * SICData;                                         //@synthesize SICData=_SICData - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * propertyListRepresentation; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(NSNumber *)DSID;
-(void)setSICData:(NSData *)arg1 ;
-(NSMutableDictionary *)propertyListRepresentation;
-(NSData *)SICData;
-(id)initWithDSID:(id)arg1 SICData:(id)arg2 ;
-(NSData *)cloudCredentialsTokenData;
-(void)setCloudCredentialsTokenData:(NSData *)arg1 ;
@end

