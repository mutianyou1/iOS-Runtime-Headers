/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewElement.h>

@class IKAssetElement, NSString, NSURL, NSNumber;

@interface TVAssetElement : TVViewElement

@property (nonatomic,readonly) IKAssetElement * assetElement; 
@property (nonatomic,readonly) NSString * actionParams; 
@property (nonatomic,readonly) NSString * adamID; 
@property (nonatomic,readonly) NSURL * extrasURL; 
@property (nonatomic,readonly) unsigned long long keyDelivery; 
@property (nonatomic,readonly) NSNumber * persistentID; 
@property (nonatomic,readonly) NSNumber * rentalAdamID; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSURL * url; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)type;
-(NSURL *)url;
-(NSNumber *)persistentID;
-(NSString *)adamID;
-(unsigned long long)keyDelivery;
-(NSString *)actionParams;
-(NSURL *)extrasURL;
-(NSNumber *)rentalAdamID;
-(IKAssetElement *)assetElement;
@end

