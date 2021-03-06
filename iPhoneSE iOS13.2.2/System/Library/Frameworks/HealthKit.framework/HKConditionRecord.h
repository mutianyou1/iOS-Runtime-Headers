/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, HKInspectableValue, HKMedicalDate, HKMedicalCoding, HKConcept, NSUUID, NSLocale, HKConditionRecordType;

@interface HKConditionRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	NSArray* _conditionCodings;
	NSArray* _categoryCodings;
	NSString* _asserter;
	HKInspectableValue* _abatement;
	HKInspectableValue* _onset;
	HKMedicalDate* _recordedDate;
	HKMedicalCoding* _clinicalStatusCoding;
	HKMedicalCoding* _verificationStatusCoding;
	NSArray* _severityCodings;
	NSArray* _bodySitesCodings;
	HKConcept* _condition;
	HKConcept* _category;
	HKConcept* _clinicalStatus;
	HKConcept* _verificationStatus;
	HKConcept* _severity;
	NSArray* _bodySites;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (copy,readonly) HKConditionRecordType * conditionRecordType; 
@property (copy,readonly) HKInspectableValue * abatement; 
@property (copy,readonly) NSString * asserter; 
@property (copy,readonly) NSArray * bodySites; 
@property (copy,readonly) NSArray * bodySitesCodings; 
@property (copy,readonly) HKConcept * category; 
@property (copy,readonly) NSArray * categoryCodings; 
@property (copy,readonly) HKConcept * clinicalStatus; 
@property (copy,readonly) HKMedicalCoding * clinicalStatusCoding; 
@property (copy,readonly) HKConcept * condition; 
@property (copy,readonly) NSArray * conditionCodings; 
@property (copy,readonly) HKInspectableValue * onset; 
@property (copy,readonly) HKMedicalDate * recordedDate; 
@property (copy,readonly) HKConcept * severity; 
@property (copy,readonly) NSArray * severityCodings; 
@property (copy,readonly) HKConcept * verificationStatus; 
@property (copy,readonly) HKMedicalCoding * verificationStatusCoding; 
+(BOOL)supportsSecureCoding;
+(id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 conditionCodings:(id)arg11 categoryCodings:(id)arg12 asserter:(id)arg13 abatement:(id)arg14 onset:(id)arg15 recordedDate:(id)arg16 clinicalStatusCoding:(id)arg17 verificationStatusCoding:(id)arg18 severityCodings:(id)arg19 bodySitesCodings:(id)arg20 ;
+(id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 conditionCodings:(id)arg10 categoryCodings:(id)arg11 asserter:(id)arg12 abatement:(id)arg13 onset:(id)arg14 recordedDate:(id)arg15 clinicalStatusCoding:(id)arg16 verificationStatusCoding:(id)arg17 severityCodings:(id)arg18 bodySitesCodings:(id)arg19 ;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)conditionCodingsPreferredSystems;
+(id)bodySitesCodingsPreferredSystems;
+(id)categoryCodingsPreferredSystems;
+(id)clinicalStatusCodingPreferredSystems;
+(id)severityCodingsPreferredSystems;
+(id)verificationStatusCodingPreferredSystems;
+(id)_newConditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 conditionCodings:(id)arg11 categoryCodings:(id)arg12 asserter:(id)arg13 abatement:(id)arg14 onset:(id)arg15 recordedDate:(id)arg16 clinicalStatusCoding:(id)arg17 verificationStatusCoding:(id)arg18 severityCodings:(id)arg19 bodySitesCodings:(id)arg20 config:(/*^block*/id)arg21 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKConcept *)category;
-(HKConcept *)condition;
-(void)_setCategory:(id)arg1 ;
-(HKConcept *)verificationStatus;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)medicalRecordCodings;
-(id)indexKeywords;
-(id)medicalRecordPreferredSystems;
-(NSArray *)conditionCodings;
-(NSArray *)categoryCodings;
-(HKMedicalCoding *)clinicalStatusCoding;
-(HKMedicalCoding *)verificationStatusCoding;
-(NSArray *)severityCodings;
-(NSArray *)bodySitesCodings;
-(void)_setCondition:(id)arg1 ;
-(void)_setClinicalStatus:(id)arg1 ;
-(void)_setVerificationStatus:(id)arg1 ;
-(void)_setSeverity:(id)arg1 ;
-(void)_setBodySites:(id)arg1 ;
-(HKConditionRecordType *)conditionRecordType;
-(id)bodySitesCodingsTasks;
-(id)categoryCodingsTasks;
-(id)clinicalStatusCodingTasks;
-(id)conditionCodingsTasks;
-(id)severityCodingsTasks;
-(id)verificationStatusCodingTasks;
-(NSString *)asserter;
-(void)_setAsserter:(id)arg1 ;
-(HKConcept *)severity;
-(HKInspectableValue *)abatement;
-(HKInspectableValue *)onset;
-(HKMedicalDate *)recordedDate;
-(HKConcept *)clinicalStatus;
-(NSArray *)bodySites;
-(id)conditionCodingsCollection;
-(id)conditionCodingsContext;
-(id)categoryCodingsCollection;
-(id)categoryCodingsContext;
-(id)clinicalStatusCodingCollection;
-(id)clinicalStatusCodingContext;
-(id)verificationStatusCodingCollection;
-(id)verificationStatusCodingContext;
-(id)severityCodingsCollection;
-(id)severityCodingsContext;
-(id)bodySitesCodingsCollection;
-(id)bodySitesCodingsContexts;
-(void)_setConditionCodings:(id)arg1 ;
-(void)_setCategoryCodings:(id)arg1 ;
-(void)_setAbatement:(id)arg1 ;
-(void)_setOnset:(id)arg1 ;
-(void)_setRecordedDate:(id)arg1 ;
-(void)_setClinicalStatusCoding:(id)arg1 ;
-(void)_setVerificationStatusCoding:(id)arg1 ;
-(void)_setSeverityCodings:(id)arg1 ;
-(void)_setBodySitesCodings:(id)arg1 ;
@end

