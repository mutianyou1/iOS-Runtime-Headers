/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreach.framework/NewDeviceOutreach
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSArray, NSDictionary;

@interface NDOWarranty : NSObject <NSSecureCoding> {

	BOOL _covered;
	BOOL _acOfferEligible;
	BOOL _acOfferDisplay;
	BOOL _acOfferSettingsAppBadge;
	BOOL _acOfferSettingsRowBadge;
	NSDate* _coverageEndDate;
	NSString* _localizedCoveredDeviceDateLabelFormat;
	NSString* _coverageLocalizedLabel;
	NSString* _coverageLocalizedDesc;
	NSString* _coverageLocalizedDescLong;
	NSString* _coverageLocalizedExpirationLabel;
	NSString* _footer1FormatString;
	NSString* _footer1LinkLabel;
	NSString* _footer1LinkURL;
	NSString* _footer2FormatString;
	NSString* _footer2LinkLabel;
	NSString* _footer2LinkURL;
	NSDate* _acOfferEligibleUntil;
	NSString* _acOfferIdentifier;
	NSString* _acLocalizedOfferLabel;
	NSString* _acLocalizedOfferPluralDescFormat;
	NSString* _acLocalizedOfferSingularDesc;
	NSString* _acLocalizedOfferCTA;
	NSString* _acLocalizedOfferDetails;
	NSString* _acLocalizedOfferDetailsPluralEligibilityFormat;
	NSString* _acLocalizedOfferDetailsSingularEligibility;
	double _acOfferDurationBeforeEndDate;
	NSArray* _acOfferToggle;
	NSDate* _coverageValidityDate;
	NSDictionary* _dictionaryRepresentation;

}

@property (assign) BOOL covered;                                                           //@synthesize covered=_covered - In the implementation block
@property (retain) NSDate * coverageEndDate;                                               //@synthesize coverageEndDate=_coverageEndDate - In the implementation block
@property (retain) NSDate * coverageValidityDate;                                          //@synthesize coverageValidityDate=_coverageValidityDate - In the implementation block
@property (retain) NSString * localizedCoveredDeviceDateLabelFormat;                       //@synthesize localizedCoveredDeviceDateLabelFormat=_localizedCoveredDeviceDateLabelFormat - In the implementation block
@property (retain) NSString * coverageLocalizedLabel;                                      //@synthesize coverageLocalizedLabel=_coverageLocalizedLabel - In the implementation block
@property (retain) NSString * coverageLocalizedDesc;                                       //@synthesize coverageLocalizedDesc=_coverageLocalizedDesc - In the implementation block
@property (retain) NSString * coverageLocalizedDescLong;                                   //@synthesize coverageLocalizedDescLong=_coverageLocalizedDescLong - In the implementation block
@property (retain) NSString * coverageLocalizedExpirationLabel;                            //@synthesize coverageLocalizedExpirationLabel=_coverageLocalizedExpirationLabel - In the implementation block
@property (retain) NSString * footer1FormatString;                                         //@synthesize footer1FormatString=_footer1FormatString - In the implementation block
@property (retain) NSString * footer1LinkLabel;                                            //@synthesize footer1LinkLabel=_footer1LinkLabel - In the implementation block
@property (retain) NSString * footer1LinkURL;                                              //@synthesize footer1LinkURL=_footer1LinkURL - In the implementation block
@property (retain) NSString * footer2FormatString;                                         //@synthesize footer2FormatString=_footer2FormatString - In the implementation block
@property (retain) NSString * footer2LinkLabel;                                            //@synthesize footer2LinkLabel=_footer2LinkLabel - In the implementation block
@property (retain) NSString * footer2LinkURL;                                              //@synthesize footer2LinkURL=_footer2LinkURL - In the implementation block
@property (assign) BOOL acOfferEligible;                                                   //@synthesize acOfferEligible=_acOfferEligible - In the implementation block
@property (retain) NSDate * acOfferEligibleUntil;                                          //@synthesize acOfferEligibleUntil=_acOfferEligibleUntil - In the implementation block
@property (retain) NSString * acOfferIdentifier;                                           //@synthesize acOfferIdentifier=_acOfferIdentifier - In the implementation block
@property (retain) NSString * acLocalizedOfferLabel;                                       //@synthesize acLocalizedOfferLabel=_acLocalizedOfferLabel - In the implementation block
@property (retain) NSString * acLocalizedOfferPluralDescFormat;                            //@synthesize acLocalizedOfferPluralDescFormat=_acLocalizedOfferPluralDescFormat - In the implementation block
@property (retain) NSString * acLocalizedOfferSingularDesc;                                //@synthesize acLocalizedOfferSingularDesc=_acLocalizedOfferSingularDesc - In the implementation block
@property (retain) NSString * acLocalizedOfferCTA;                                         //@synthesize acLocalizedOfferCTA=_acLocalizedOfferCTA - In the implementation block
@property (retain) NSString * acLocalizedOfferDetails;                                     //@synthesize acLocalizedOfferDetails=_acLocalizedOfferDetails - In the implementation block
@property (retain) NSString * acLocalizedOfferDetailsPluralEligibilityFormat;              //@synthesize acLocalizedOfferDetailsPluralEligibilityFormat=_acLocalizedOfferDetailsPluralEligibilityFormat - In the implementation block
@property (retain) NSString * acLocalizedOfferDetailsSingularEligibility;                  //@synthesize acLocalizedOfferDetailsSingularEligibility=_acLocalizedOfferDetailsSingularEligibility - In the implementation block
@property (assign) BOOL acOfferDisplay;                                                    //@synthesize acOfferDisplay=_acOfferDisplay - In the implementation block
@property (assign) BOOL acOfferSettingsAppBadge;                                           //@synthesize acOfferSettingsAppBadge=_acOfferSettingsAppBadge - In the implementation block
@property (assign) BOOL acOfferSettingsRowBadge;                                           //@synthesize acOfferSettingsRowBadge=_acOfferSettingsRowBadge - In the implementation block
@property (assign) double acOfferDurationBeforeEndDate;                                    //@synthesize acOfferDurationBeforeEndDate=_acOfferDurationBeforeEndDate - In the implementation block
@property (retain) NSArray * acOfferToggle;                                                //@synthesize acOfferToggle=_acOfferToggle - In the implementation block
@property (retain) NSDictionary * dictionaryRepresentation;                                //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
@property (readonly) NSString * acLocalizedOfferDesc; 
@property (readonly) NSString * acLocalizedOfferDetailsEligibility; 
@property (readonly) unsigned daysEligible; 
+(BOOL)supportsSecureCoding;
+(id)_warrantyPath;
+(id)warrantyWithDictionary:(id)arg1 ;
+(id)cachedWarranty;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)cache;
-(void)setDictionaryRepresentation:(NSDictionary *)arg1 ;
-(BOOL)covered;
-(BOOL)acOfferEligible;
-(NSString *)coverageLocalizedLabel;
-(NSDate *)coverageEndDate;
-(NSString *)localizedCoveredDeviceDateLabelFormat;
-(NSString *)acLocalizedOfferCTA;
-(NSString *)acLocalizedOfferDesc;
-(NSString *)coverageLocalizedDesc;
-(NSString *)footer1FormatString;
-(NSString *)footer1LinkLabel;
-(NSString *)footer2FormatString;
-(NSString *)footer2LinkLabel;
-(NSString *)coverageLocalizedDescLong;
-(NSString *)coverageLocalizedExpirationLabel;
-(NSString *)footer1LinkURL;
-(NSString *)footer2LinkURL;
-(void)setCovered:(BOOL)arg1 ;
-(id)_dateWithEpochNumber:(id)arg1 ;
-(void)setCoverageEndDate:(NSDate *)arg1 ;
-(void)setLocalizedCoveredDeviceDateLabelFormat:(NSString *)arg1 ;
-(void)setCoverageLocalizedLabel:(NSString *)arg1 ;
-(void)setCoverageLocalizedDesc:(NSString *)arg1 ;
-(void)setCoverageLocalizedDescLong:(NSString *)arg1 ;
-(void)setCoverageLocalizedExpirationLabel:(NSString *)arg1 ;
-(void)setFooter1FormatString:(NSString *)arg1 ;
-(void)setFooter1LinkLabel:(NSString *)arg1 ;
-(void)setFooter1LinkURL:(NSString *)arg1 ;
-(void)setFooter2FormatString:(NSString *)arg1 ;
-(void)setFooter2LinkLabel:(NSString *)arg1 ;
-(void)setFooter2LinkURL:(NSString *)arg1 ;
-(void)setAcOfferEligible:(BOOL)arg1 ;
-(void)setAcOfferEligibleUntil:(NSDate *)arg1 ;
-(void)setAcOfferIdentifier:(NSString *)arg1 ;
-(void)setAcLocalizedOfferLabel:(NSString *)arg1 ;
-(void)setAcLocalizedOfferPluralDescFormat:(NSString *)arg1 ;
-(void)setAcLocalizedOfferSingularDesc:(NSString *)arg1 ;
-(void)setAcLocalizedOfferCTA:(NSString *)arg1 ;
-(void)setAcLocalizedOfferDetails:(NSString *)arg1 ;
-(void)setAcLocalizedOfferDetailsPluralEligibilityFormat:(NSString *)arg1 ;
-(void)setAcLocalizedOfferDetailsSingularEligibility:(NSString *)arg1 ;
-(void)setAcOfferDisplay:(BOOL)arg1 ;
-(void)setAcOfferSettingsAppBadge:(BOOL)arg1 ;
-(void)setAcOfferSettingsRowBadge:(BOOL)arg1 ;
-(void)setAcOfferDurationBeforeEndDate:(double)arg1 ;
-(void)setAcOfferToggle:(NSArray *)arg1 ;
-(unsigned)daysEligible;
-(NSString *)acLocalizedOfferSingularDesc;
-(NSString *)acLocalizedOfferPluralDescFormat;
-(NSString *)acLocalizedOfferDetailsSingularEligibility;
-(NSString *)acLocalizedOfferDetailsPluralEligibilityFormat;
-(NSDate *)acOfferEligibleUntil;
-(NSString *)acLocalizedOfferDetailsEligibility;
-(NSString *)acOfferIdentifier;
-(NSString *)acLocalizedOfferLabel;
-(NSString *)acLocalizedOfferDetails;
-(BOOL)acOfferDisplay;
-(BOOL)acOfferSettingsAppBadge;
-(BOOL)acOfferSettingsRowBadge;
-(double)acOfferDurationBeforeEndDate;
-(NSArray *)acOfferToggle;
-(NSDate *)coverageValidityDate;
-(void)setCoverageValidityDate:(NSDate *)arg1 ;
@end

