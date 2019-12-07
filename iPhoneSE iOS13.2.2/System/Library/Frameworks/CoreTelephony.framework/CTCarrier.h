/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CTCarrier : NSObject {

	NSString* _carrierName;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSString* _isoCountryCode;
	BOOL _allowsVOIP;

}

@property (nonatomic,retain) NSString * carrierName;                    //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * mobileCountryCode;              //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (nonatomic,retain) NSString * mobileNetworkCode;              //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (nonatomic,retain) NSString * isoCountryCode;                 //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (assign,nonatomic) BOOL allowsVOIP;                           //@synthesize allowsVOIP=_allowsVOIP - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)isoCountryCode;
-(NSString *)carrierName;
-(void)setCarrierName:(NSString *)arg1 ;
-(BOOL)allowsVOIP;
-(NSString *)mobileNetworkCode;
-(NSString *)mobileCountryCode;
-(void)setMobileCountryCode:(NSString *)arg1 ;
-(void)setMobileNetworkCode:(NSString *)arg1 ;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)setAllowsVOIP:(BOOL)arg1 ;
@end
